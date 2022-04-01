#include <iostream>
using namespace std;

long factorial(int); //팩토리얼 계산 함수 선언

int main(void)
{
	int num;
	cin >> num;

	cout << num << "'s factorial : " << factorial(num) << endl;

	return 0;
}

long factorial(int a)
{
	if (a == 0)
		return 1;
	else
		return (a * factorial(a - 1));
} //재귀함수 형식