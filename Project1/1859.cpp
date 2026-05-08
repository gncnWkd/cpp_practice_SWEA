#include "iostream"
#include "vector"
#include "sstream"
#include "string"

using namespace std;

int main() {
	int T, N;
	cin >> T;
	string line;
	

	for (int i = 0; i < T; i++) {
		cin >> N;
		cin.ignore();
		vector<int> prices;

		getline(cin, line);

		istringstream iss(line);
		string word;

		while (iss >> word) {
			prices.push_back(stoi(word));
		}
		
		// 최대 이익을 계산
		// 가격이 오르다 떨어지기 시작하면, 떨어지기 직전에 파는 것이 이득
		// 반드시 가격이 한번 이상 올라야 팔수있음
		// 오르기만하면 마지막에 팔아야 하고, 떨어지기만하면 팔 수 없음
		// 가격의 흐름이 오름을 한번 이상 포함한 오름,유지의 연속 => 하락인경우 하락 직전의 가격에서 팔기
		// is_rising이 true, is_falling이 false인 상태에서 is_falling이 true가 되면 판매하고 is_rising을 false로 바꿈
		// is_rising이 false, is_falling이 true인 상태에서 is_rising이 true가 되면 if_falling을 false로 바꿈


		bool is_rising, is_falling = false;
		int diff = 0;
		int sell_pivot = 0;
		
		for (int i = 1; i < prices.size(); i++) {
			diff = prices[i] - prices[i - 1];
			
			if (is_rising == true && diff < 0) {
				//sell
				is_rising = false;
				is_falling = true;
			}
			else if (is_falling == true && diff > 0) {
				is_falling = false;
				is_rising = true;
			}

			else if (diff < 0) {
				is_falling = true;
			}
			else if (diff > 0) {
				is_rising = true;
			}
		}

		if (sell_pivot == 0 && is_rising == true) {
			//sell in the end
		}









		prices.clear();
	}
	
}