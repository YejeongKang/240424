#include <iostream>

using namespace std;

int add(int n1, int n2) {
	return n1 + n2;
}

int sub(int n1, int n2) {
	return abs(n1 - n2);
}

int mul(int n1, int n2) {
	return n1 * n2;
}

float divide(int n1, int n2) {
	return float(n1) / float(n2);
}

int main() {
	int n1, n2; 
	cout << "정수 두 개를 입력하시오.\n";
	cin >> n1 >> n2;

	cout << "합 : " << add(n1, n2) << endl;
	cout << "차 : " << sub(n1, n2) << endl;
	cout << "곱 : " << mul(n1, n2) << endl;
	cout << "나눗셈 : " << divide(n1, n2) << endl;

}