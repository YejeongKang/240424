#include <iostream>

using namespace std;

int main() {
	string city[5] = { "Korea", "America", "France", "Germany", "Japan" };
	string nation;
	bool check = false;
	int CityArraySize = sizeof(city) / sizeof(city[0]);
	
	cout << "ã�� ���� ��� (��� ���: list): " << endl;
	cin >> nation;
		
	if (nation == "list") {
		for (string nation : city) {
			cout << nation << endl;
		}
	}
	else {
		for (int i = 0; i < CityArraySize; i++) {
			if (nation == city[i]) {
				check = true;
				cout << "[" << i + 1 << "]" << city[i] << endl;
				break;
			}			
		}
		if (check == false) {
			cout << "���� �̸��� ����� �Է��Ͻÿ�.";
		}
	}
}






