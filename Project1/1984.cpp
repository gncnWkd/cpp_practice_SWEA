#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int solution();

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cout << "#" << i + 1 << " " << solution() << endl;
	}

}

int solution() {
	vector<int> arr(10,0);
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];
	int sum = 0;

	for (int i : arr) {
		if (i < min) {
			min = i;
		}
		else if (i > max) {
			max = i;
		}
		sum += i;
	}

	sum -= max + min;
	float avg = (float)sum / 8;

	return floor(avg + 0.5);

}