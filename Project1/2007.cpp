#include <iostream>
#include <string>
using namespace std;

bool test(string, string);

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		string pattern = "";

		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			pattern += s[j];
			if (test(s, pattern)) {
				break;
			}
		}
		//cout << pattern << endl;
		cout << "#" << i + 1 << " " << pattern.length() << "\n";
	}
	
	return 0;
}

bool test(string s, string pattern) {
	for (int i = 0; i < s.length();i += pattern.length()) {
		//cout << "s.substr(i, pattern.length()) = " << s.substr(i, pattern.length()) << endl;
		//cout << "pattern = " << pattern << endl;
		//cout << "i = " << i << endl;
		if (s.substr(i, pattern.length()).length() == pattern.length() && s.substr(i, pattern.length()) != pattern) {
			
			return false;
		}
	}
	return true;
}