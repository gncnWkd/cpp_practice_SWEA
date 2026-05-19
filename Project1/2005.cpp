#include <iostream>
#include <vector>

using namespace std;

void pas();


int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cout << "#" << i + 1 << endl;
		pas();
	}
	
}

void pas() {
	int N;
	cin >> N;

	vector<vector<int>> pascal(N, vector<int>(N + 5, 0));
	pascal[0][1] = 1;

	for (int i = 1; i < N; i++) {
		for (int j = 1; j < i + 2; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << pascal[i][j+1] << " ";
		}
		cout << "\n";
	}
}