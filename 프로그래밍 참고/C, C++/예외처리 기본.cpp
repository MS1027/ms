#include <iostream>
#include <vector>

using namespace std;

// 예외처리 : try/catch 키워드를 사용
// 1. try: 예외가 발생할 수 있는 부분
// 2. catch: try에서 예외가 발생할 경우 수행되는 구문
// - 장점1: 프로그램이 종료되지 않고 계속 동작
// - 장점2: 예외 tracking 가능(종류, 위치 등)
int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	try {
//		cout << v[index] << endl;		// []: primitive indexing operator (오래전부터 만들어진 operator이기에 catch를 발동시키지 않음)
//		[]를 사용하고 싶다면 조건문을 걸어 오류가 발생하지 않게 하는 것이 좋음
		cout << v.at(index) << endl;	// at(): 예외처리(catch를 발동)를 포함 (효율은 떨어지나 예외처리가 잘 되어있음)
	}
	catch (exception & e) { // 한 줄이어도 중괄호를 써야 함. exception: 예외처리를 다루는 class
		cout << e.what() << endl; // 예외 종류를 문자열로 반환해주는 exception클래스의 메소드
	}

	cout << "Program is still running" << endl;

	return 0;
}