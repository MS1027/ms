#include <iostream>
using namespace std;

int add(int a, int b) {
	return (a + b);
}

int execute(int(*f)(int, int), int a, int b) { // �Լ��� ���ڷ� ����
	return f(a, b);                            // ���ڷ� ���� �Լ��� ���
}

int main() {

	int a = 3, b = 4;

	cout << execute(&add, a, b) << endl; // ȣ�� �� & ���

	int (*f2)(int, int) = add;           // �Լ� ������ ����

	cout << f2(a, b) << endl;            // �Լ� ������ ���

	return 0;
}