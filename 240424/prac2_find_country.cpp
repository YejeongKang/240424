#include <iostream>

using namespace std;

int main() {
	string city[5] = { "Korea", "America", "France", "Germany", "Japan" };
	string input;
	bool check = false;
	int CityArraySize = sizeof(city) / sizeof(city[0]);
	
	cout << "찾는 나라가 어딘교 (모두 출력: list): " << endl;
	cin >> input;
		
	if (input == "list") {
		for (string input : city) {
			cout << input << endl;
		}
	}
	else {
		for (int i = 0; i < CityArraySize; i++) {
			if (input == city[i]) {
				check = true;
				cout << "[" << i + 1 << "]" << city[i] << endl;
				break;
			}			
		}
		if (check == false) {
			cout << "나라 이름을 제대로 입력하시오.";
		}
	}
}






