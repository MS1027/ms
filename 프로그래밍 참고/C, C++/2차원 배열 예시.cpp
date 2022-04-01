#include <iostream>

using namespace std;

const int rows = 3, columns = 5; // rows(��)�� columns(��)�� ���������� ����, ���ȭ
using Matrix = double[rows][columns]; // double[rows][columns]�� Matrix�� ġȯ

void populate_matrix(Matrix m) { // 2���� �迭�� ������� �Է� �޴� �Լ�
	cout << "Enter the " << rows << " rows of the matrix." << endl;
	for (int row = 0; row < rows; row++) {
		cout << "Row #" << row << " (enter " << columns << " values): ";
		for (int col = 0; col < columns; col++)
			cin >> m[row][col];
	}
}

void print_matrix(Matrix m) { // 2���� �迭�� ����ϴ� �Լ�
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
}

int main() {
	
	Matrix Mat; // double[3][5]�� array�� Mat ����

	populate_matrix(Mat);
	
	print_matrix(Mat);

	return 0;
}