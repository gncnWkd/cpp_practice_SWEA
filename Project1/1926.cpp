#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	//131


	for (int i = 1; i <= N; i++) {
		string output = "";

		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			output += "-";
		}
		if ((i / 10) % 10 == 3 || (i / 10) % 10 == 6 || (i / 10) % 10 == 9) {
			output += "-";
		}
		if (i / 100 == 3 || i / 100 == 6 || i / 100 == 9) {
			output += "-";
		}

		if (output == "") {
			output = to_string(i);
		}

		cout << output << " ";
	}
}