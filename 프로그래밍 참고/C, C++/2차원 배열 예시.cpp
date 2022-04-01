#include <iostream>

using namespace std;

const int rows = 3, columns = 5; // rows(행)와 columns(열)을 전역변수로 선언, 상수화
using Matrix = double[rows][columns]; // double[rows][columns]을 Matrix로 치환

void populate_matrix(Matrix m) { // 2차원 배열을 행단위로 입력 받는 함수
	cout << "Enter the " << rows << " rows of the matrix." << endl;
	for (int row = 0; row < rows; row++) {
		cout << "Row #" << row << " (enter " << columns << " values): ";
		for (int col = 0; col < columns; col++)
			cin >> m[row][col];
	}
}

void print_matrix(Matrix m) { // 2차원 배열을 출력하는 함수
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
}

int main() {
	
	Matrix Mat; // double[3][5]의 array인 Mat 생성

	populate_matrix(Mat);
	
	print_matrix(Mat);

	return 0;
}