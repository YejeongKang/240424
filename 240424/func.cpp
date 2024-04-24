
#include <iostream>

using namespace std;

int GetTen()
{
    //GetFive(); //깊이 두 단계 들어가진 것.
    return 10;
}

int IntSum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    // cin >> num1 >> num2; 
    // 두 개 동시에 입력받을 수 있음.

    int ten = GetTen(); // ten = 10;
    int result = IntSum(4, 7); // 4 + 7
    // int result = PrintHi(); // 리턴되는 값이 없어서 가져올 것도 없다.
    PrintSomething("Neuron");

}
void PrintSomething(string message)
{
    cout << message << endl;
}

void PrintHi()
{
    cout << "Hi ~~~" << endl;
}


string OddEven(int num)
{
    if ((num % 2) == 0) // 짝수
    {
        return "짝수";
    }
    else // 홀수
    {
        return "홀수";
    }
}
