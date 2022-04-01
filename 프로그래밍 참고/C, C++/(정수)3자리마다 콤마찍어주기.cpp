#include <iostream>
#include <locale>
using namespace std;

int main() {
	int x = 1;

	cout.imbue(locale(""));

	while (x <= 1000000000) {
		cout << x << endl;
		x *= 10;
	} // 1,000와 같이 세자리 마다 ,를 넣어 출력한다.

}