#include <iostream>
#include <vector>
using namespace std;
/*
누적합 적용 전

vector<vector<int>> sumArr(vector<vector<int>>, int M);

int main() {
	int T, N, M;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;

		vector<vector<int>> arr(N, vector<int>(N,0));

		

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cin >> arr[j][k];
			}
		}
		arr = sumArr(arr, M);

		int max = 0;

		for (vector<int> i : arr) {
			for (int j : i) {
				if (max < j) {
					max = j;
				}
			}
		}

		

		cout << "#" << i+1 << " " << max << endl;		
	}
}

vector<vector<int>> sumArr(vector<vector<int>> arr, int M) {
	int len = arr[0].size();
	vector<vector<int>> temp(len, vector<int>(len-M+1,0));
	vector<vector<int>> newArr(len-M+1, vector<int>(len-M+1,0));
	int tempSum = 0;


	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - M + 1; j++) {
			for (int k = 0; k < M; k++) {
				tempSum += arr[i][k+j];
			}
			temp[i][j] = tempSum;
			tempSum = 0;
		}
	}

	tempSum = 0;

	for (int i = 0; i < len-M+1; i++) {
		for (int j = 0; j < len - M + 1; j++) {
			for (int k = 0; k < M; k++) {
				tempSum += temp[k + j][i];
			}
			newArr[i][j] = tempSum;
			tempSum = 0;

		}
	}
	
	return newArr;
}

*/

//누적합 적용

int solve();


int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cout << "#" << i + 1 << " " << solve() << endl;
	}

	return 0;
}

int solve() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> prefixSum(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];
			prefixSum[i][j] = arr[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
		}
	}

	// 오른쪽 아래 꼭짓점을 (i,j)로 하는 M x M크기의 부분행렬의 합 = prefixSum[i][j] - prefixSum[i-M][j] - prefixSum[i][j-M] + prefixSum[i-M][j-M]

	int maxVal = 0;

	for (int i = M; i <= N; i++) {
		for (int j = M; j <= N; j++) {
			int currentSum = prefixSum[i][j] - prefixSum[i - M][j] - prefixSum[i][j - M] + prefixSum[i - M][j - M];
			if (currentSum > maxVal) {
				maxVal = currentSum;
			}
		}
	}

	return maxVal;
}