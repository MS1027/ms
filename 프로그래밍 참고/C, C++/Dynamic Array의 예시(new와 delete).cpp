#include <iostream>

using namespace std;


int main() {
	
	// �����Ҵ��� ����

	double sum = 0.0; // array�� ��� ��Ҹ� �ջ��Ͽ� ������ ����
	double* numbers; // double�� ������ ����
	int size; // ����� ������ ������ ���� ����

	cout << "Please enter number of values to process: ";
	cin >> size; // ����� ���� �Է�

	if (size > 0) {
		cout << "Please enter " << size << " numbers: ";
		numbers = new double[size]; // �Է��� size��ŭ�� ũ�⸦ ���� array ����
		
		for (int i = 0; i < size; i++) { // �� �ϳ��� �Է¹޴� ���ÿ� sum�� �ջ�
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size; i++)
			cout << numbers[i] << ' ';
		cout << "is " << sum / size << endl;

		delete numbers; // �޸� ������ ���Ͽ� �� ����������
	}

	/*
	double* numbers;
	numbers = new double[size]
	delete numbers;
	�� ������ �� ����ص���
	*/

	return 0;
}