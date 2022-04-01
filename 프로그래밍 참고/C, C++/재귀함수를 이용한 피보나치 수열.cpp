#include <iostream>
#include <iomanip>
using namespace std;

long fib(int); //�Ǻ���ġ ����(a�� = a�� + a�� ����) �Լ� ����

int main(void)
{
	int num;
	cin >> num; //2�̻��� ���� �Է�

	for (int looper = 0; looper < num; looper++)
	{
		if (looper % 5)//5���� ��� ���
			cout << ", " << setw(8) << fib(looper); //setw�� �˾Ƽ� �ٲܰ�
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
} //����Լ� ����