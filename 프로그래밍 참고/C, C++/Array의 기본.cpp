#include <iostream>

using namespace std;

void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void clear(int arr[], int n) {
	for (int i = 0; i < n; i++)
		arr[i] = 0;
	/*
	array를 인자로 받을 땐 &를 사용하지 않아도 'Pass by Reference' 방식이 적용됨
	따라서 값을 변경하지 못하도록 수정하기 위해서는
	void clear(const int arr[], int n)처럼 const를 써주어야 함
	*/
}

int main() {

	int list[3] = { 5, -3, 12 }; // array 생성 (초기화를 하지 않아도 됨)
	list[2] = 1; // 인덱싱으로 값 수정 가능

	print(list, 3); // array는 (vector와는 다르게) size 함수가 없어서 크기를 별도로 넘겨주어야 함

	clear(list, 3);
	print(list, 3);

	return 0;
}