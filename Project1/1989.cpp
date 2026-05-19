#include <iostream>

using namespace std;

int solution();

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cout<<"#"<<i+1<<" "<<solution() << endl;
	}
}

int solution() {
	string s;
	cin >> s;

	//홀수면 글자수/2 + 1
	//짝수면 글자수/2


	// ABCDEFG

	if (s.length() % 2 == 0) {
		for (int i = 0; i < s.length() / 2; i++) {
			if (s[i] != s[s.length() - 1 - i]) {
				return 0;
			}
		}
	}
	else {
		for (int i = 0; i < s.length() / 2 + 1; i++) {
			if (s[i] != s[s.length() - 1 - i]) {
				return 0;
			}
		}
	}
	
	return 1;

}