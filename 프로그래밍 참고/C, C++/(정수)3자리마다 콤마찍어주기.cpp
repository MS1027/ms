#include <iostream>
#include <locale>
using namespace std;

int main() {
	int x = 1;

	cout.imbue(locale(""));

	while (x <= 1000000000) {
		cout << x << endl;
		x *= 10;
	} // 1,000�� ���� ���ڸ� ���� ,�� �־� ����Ѵ�.

}