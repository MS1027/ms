#include <iostream>
using namespace std;

int add(int a, int b) {
	return (a + b);
}

int execute(int(*f)(int, int), int a, int b) { // 함수를 인자로 받음
	return f(a, b);                            // 인자로 받은 함수를 사용
}

int main() {

	int a = 3, b = 4;

	cout << execute(&add, a, b) << endl; // 호출 시 & 사용

	int (*f2)(int, int) = add;           // 함수 포인터 선언

	cout << f2(a, b) << endl;            // 함수 포인터 사용

	return 0;
}