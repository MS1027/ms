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

	// lambda 함수: [](입력변수)->리턴타입 {본문}
	// ex) [](int x, int y)->int { return x + y; }
	// int sum(int x, int y) { return x + y; } 함수와 같음.

	cout << evaluate([](int x, int y)->int {return x + y; }, 2, 3); // evaluate(sum, 2, 3)과 동일한 기능

	// simplified lambda 함수 표현: [](입력변수) {본문}
	// ex) [](int x, int y){ return x * y );
	cout << evaluate([](int x, int y) { return x * y; }, 2, 3); // evaluate(mul, 2, 3)과 동일한 기능

	// lambda함수 생성-호출 동시에
	[](int x, int y) { cout << x << ", " << y << endl; } (20, 30);
	
	// lambda함수를 local function으로 사용
	auto f = [](int x, int y) { return x - y; };
	// int(*f)(int x, int y) { return x - y; };와 같은 의미
	cout << f(2, 3) << endl;

	return 0;
}