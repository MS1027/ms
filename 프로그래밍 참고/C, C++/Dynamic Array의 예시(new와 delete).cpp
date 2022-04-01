#include <iostream>

using namespace std;


int main() {
	
	// 동적할당의 예시

	double sum = 0.0; // array의 모든 요소를 합산하여 저장할 변수
	double* numbers; // double형 포인터 생성
	int size; // 요소의 갯수를 저장할 변수 생성

	cout << "Please enter number of values to process: ";
	cin >> size; // 요소의 갯수 입력

	if (size > 0) {
		cout << "Please enter " << size << " numbers: ";
		numbers = new double[size]; // 입력한 size만큼의 크기를 가진 array 생성
		
		for (int i = 0; i < size; i++) { // 값 하나를 입력받는 동시에 sum에 합산
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size; i++)
			cout << numbers[i] << ' ';
		cout << "is " << sum / size << endl;

		delete numbers; // 메모리 공간을 위하여 꼭 수행해주자
	}

	/*
	double* numbers;
	numbers = new double[size]
	delete numbers;
	위 과정을 꼭 기억해두자
	*/

	return 0;
}