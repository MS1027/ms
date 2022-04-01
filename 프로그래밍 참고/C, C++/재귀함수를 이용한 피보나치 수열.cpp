#include <iostream>
#include <iomanip>
using namespace std;

long fib(int); //피보나치 수열(a₃ = a₂ + a₁ 형식) 함수 선언

int main(void)
{
	int num;
	cin >> num; //2이상의 숫자 입력

	for (int looper = 0; looper < num; looper++)
	{
		if (looper % 5)//5개씩 끊어서 출력
			cout << ", " << setw(8) << fib(looper); //setw는 알아서 바꿀것
		else
			cout << endl << setw(8) << fib(looper);
	}

	return 0;
}

long fib(int a)
{
	if (a == 0 || a == 1)
		return a;
	else
		return (fib(a - 2) + fib(a - 1));
} //재귀함수 형식