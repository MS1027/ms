#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}
int mul(int x, int y) {
	return x * y;
}

int evaluate(int(*f)(int, int), int x, int y) {
	return f(x, y);
}

int main() {

	cout << evaluate(&sum, 2, 3) << endl;
	cout << evaluate(&mul, 2, 3) << endl;

	// lambda �Լ�: [](�Էº���)->����Ÿ�� {����}
	// ex) [](int x, int y)->int { return x + y; }
	// int sum(int x, int y) { return x + y; } �Լ��� ����.

	cout << evaluate([](int x, int y)->int {return x + y; }, 2, 3); // evaluate(sum, 2, 3)�� ������ ���

	// simplified lambda �Լ� ǥ��: [](�Էº���) {����}
	// ex) [](int x, int y){ return x * y );
	cout << evaluate([](int x, int y) { return x * y; }, 2, 3); // evaluate(mul, 2, 3)�� ������ ���

	// lambda�Լ� ����-ȣ�� ���ÿ�
	[](int x, int y) { cout << x << ", " << y << endl; } (20, 30);
	
	// lambda�Լ��� local function���� ���
	auto f = [](int x, int y) { return x - y; };
	// int(*f)(int x, int y) { return x - y; };�� ���� �ǹ�
	cout << f(2, 3) << endl;

	return 0;
}