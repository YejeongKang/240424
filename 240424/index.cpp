#include <iostream>
#include <string>

using namespace std;

//int main() {
//
//	// 배열의 선언
//	string fruit[3];
//
//	// 배열의 초기화
//	fruit[0] = "apple";
//	fruit[1] = "banana";
//	fruit[2] = "orange";
//
//	// 배열의 선언 & 초기화
//	string fruit[] = { "apple", "banana", "orange" };

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };
	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	// for-each: 배열의 모든 요소를 처음부터 끝까지 탐색
	int target_min = 2; // 인덱스 번호 최소값
	int target_max = 4; // 인덱스 번호 최대값
	int loop_count = 0;

	// # 1
	for (int num : intArray) // 인덱스 0번부터, 1씩 증가
	{/*if (loop_count > target_min && loop_count < target_max)
		{
			cout << num << endl;
			loop_count++;
		}*/
		cout << num << endl;
	}

	// # 2
	for (int i = 0; i < arraySize; i++)
	{
		cout << intArray[i] << endl;
	}
}