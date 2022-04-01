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
	array�� ���ڷ� ���� �� &�� ������� �ʾƵ� 'Pass by Reference' ����� �����
	���� ���� �������� ���ϵ��� �����ϱ� ���ؼ���
	void clear(const int arr[], int n)ó�� const�� ���־�� ��
	*/
}

int main() {

	int list[3] = { 5, -3, 12 }; // array ���� (�ʱ�ȭ�� ���� �ʾƵ� ��)
	list[2] = 1; // �ε������� �� ���� ����

	print(list, 3); // array�� (vector�ʹ� �ٸ���) size �Լ��� ��� ũ�⸦ ������ �Ѱ��־�� ��

	clear(list, 3);
	print(list, 3);

	return 0;
}