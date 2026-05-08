#include "iostream"
#include "string"
using namespace std;
/*
string from16to2(int);

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		string C, result;
		cin >> N >> C;
		result = "";

		for (char c : C) {
			if (c == 'A') 
				result += from16to2(10);
			else if (c == 'B')
				result += from16to2(11);
			else if(c=='C')
				result += from16to2(12);
			else if(c=='D')
				result += from16to2(13);
			else if(c=='E')
				result += from16to2(14);
			else if(c=='F')
				result += from16to2(15);
			else
				result += from16to2(c-'0');
		}

		cout << "#" << i+1 << " " << result << endl;
	}
	return 0;
}

string from16to2(int num) {
	int result = 0;
	int multiplier = 1;
	while (num >= 1) {
		result += (num % 2) * multiplier;
		multiplier *= 10;
		num /= 2;
	}

	string resultStr = to_string(result);
	if (resultStr.size() < 4) {
		resultStr = string(4 - resultStr.size(), '0') + resultStr;
	}

	return resultStr;
}
*/