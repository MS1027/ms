#include <iostream>

using namespace std;

void print(const int* arr, int n) { // int arr[]로 array를 직접 받는 것과 int* arr로 array를 가리키고 있는 '포인터'를 받는 것은 같은 의미
	for (int i = 0; i < n; i++)
		cout << *(arr + i) << ' ';
	cout << endl;
}

int main() {

	int a[] = { 2,4,6,8,10,12,14,16,18,20 }; // 정수형 array 생성
	int* p;									 // 정수형 포인터 생성
	p = &a[0];								 // 포인터 p가 a[0]를 가리킴

	for (int i = 0; i < 10;i++) {
		cout << *(p + i) << ' ';             // *(p+i)의 의미는 p가 가리키고 있는 a의 i번째 값(즉, a[i])을 의미
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {           // 위 for문과 같은 결과 값을 가짐
		cout << *p << ' ';
		p++;								 // p가 다음 인덱스값을 가리키도록 함
	}
	cout << endl;





	p = a; // p = &a[0]와 같은 의미

	cout << *p << ' ' << *(p + 1) << endl;

	*p = 1;			// 가리키고 있는 곳의 값 수정 가능
	*(p + 1) = 3;

	cout << *p << ' ' << *(p + 1) << endl; // 값이 변경된 것을 알 수 있음



	print(p, 10); // 포인터를 매개변수로 출력

	return 0;
}