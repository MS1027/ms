#include <iostream>
#include <functional> // function이라는 class가 있음
using namespace std;

int evaluate(function<int(int,int)> f, int x, int y) {
	return f(x, y);
}

int main() {

	int a = 10, b = 20;

	// lambda함수에서 []를 closuer라고 함 : 외부 변수를 lambda함수 내부로 전달
	// [a]:  변수 a를 pass by value로 lambda함수에 전달
	// [&a]: 변수 a를 pass by reference로 lambda함수에 전달
	// [=]:  모든 외부 변수를 pass by value로 전달
	// [&]:  모든 외부 변수를 pass by reference로 전달

	// closure를 사용하는 경우 함수의 입력 타입을 function class (즉, lambda식이 function이라는 class의 객체)
	cout << evaluate([a](int x, int y) { return a + x + y; }, 2, 3) << endl;
	cout << evaluate([=](int x, int y) { return a + b + x + y; }, 2, 3) << endl;

	return 0;
}