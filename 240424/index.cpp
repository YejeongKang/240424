#include <iostream>
#include <string>

using namespace std;

//int main() {
//
//	// �迭�� ����
//	string fruit[3];
//
//	// �迭�� �ʱ�ȭ
//	fruit[0] = "apple";
//	fruit[1] = "banana";
//	fruit[2] = "orange";
//
//	// �迭�� ���� & �ʱ�ȭ
//	string fruit[] = { "apple", "banana", "orange" };

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };
	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	// for-each: �迭�� ��� ��Ҹ� ó������ ������ Ž��
	int target_min = 2; // �ε��� ��ȣ �ּҰ�
	int target_max = 4; // �ε��� ��ȣ �ִ밪
	int loop_count = 0;

	// # 1
	for (int num : intArray) // �ε��� 0������, 1�� ����
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