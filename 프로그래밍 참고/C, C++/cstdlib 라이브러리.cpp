#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	
	cout << abs(-1) << endl;           // int의 절댓값 출력
	cout << labs(-1111111111) << endl; // long의 절댓값 출력
	cout << fabs(-3.14) << endl;       // double의 절댓값 출력

	cout << rand() << endl;			 // 난수 1개 반환 (다시 실행해도 값이 변하지 않음)
	srand((unsigned int)time(NULL)); // 함수의 시드값 변경(time(NULL)을 위해 time.h 헤더파일 필요)
	cout << rand() << endl;          // 실행할 때마다 값이 변함

	return 0;
}