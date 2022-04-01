#include <iostream>
#include <functional> // function�̶�� class�� ����
using namespace std;

int evaluate(function<int(int,int)> f, int x, int y) {
	return f(x, y);
}

int main() {

	int a = 10, b = 20;

	// lambda�Լ����� []�� closuer��� �� : �ܺ� ������ lambda�Լ� ���η� ����
	// [a]:  ���� a�� pass by value�� lambda�Լ��� ����
	// [&a]: ���� a�� pass by reference�� lambda�Լ��� ����
	// [=]:  ��� �ܺ� ������ pass by value�� ����
	// [&]:  ��� �ܺ� ������ pass by reference�� ����

	// closure�� ����ϴ� ��� �Լ��� �Է� Ÿ���� function class (��, lambda���� function�̶�� class�� ��ü)
	cout << evaluate([a](int x, int y) { return a + x + y; }, 2, 3) << endl;
	cout << evaluate([=](int x, int y) { return a + b + x + y; }, 2, 3) << endl;

	return 0;
}