#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		if (N % 2 == 0) {
			cout << "#" << i + 1 << " -" << N / 2 << endl;
		} 
		else {
			cout << "#" << i + 1 << " " << N / 2 + 1 << endl;
		}
	}
}