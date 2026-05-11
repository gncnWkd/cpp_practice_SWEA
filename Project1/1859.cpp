#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T, N, price;
	cin >> T;
	vector<int> prices;

	for (int i = 0; i < T; i++) {
		cin >> N;
		
		for (int j = 0; j < N; j++) {
			cin >> price;
			prices.push_back(price);
		}
		// 1 1 4 3 6
				// 6 2 3 4 1
				// 1 4 6 3 1
		//1 4 6 1 3
		// 1 4 6 1 3 3

		//뒤에서 시작해서 pivot을 맨마지막으로 주고, 하나씩 앞으로 가면서 차이가 0보다 크면 합산, 0보다 작거나 같으면 pivot 변경

		int pivot = N-1;

		//sum이 최대 100만개의 날짜 x 매매가의 최대값이 9999원이므로 99990000000는 int범위로 커버할 수 없음
		long sum = 0;
		for (int j = N-2; j >= 0; j--) {
			if (prices[pivot] - prices[j] > 0) {
				sum += prices[pivot] - prices[j];
			}
			else {
				pivot = j;
			}
		}

		cout << "#" << i + 1 << " " << sum << endl;
		

		prices.clear();
	}


	return 0;
}