#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double pi = 3.141592;

	cout << setw(10) << pi << endl;                 // 10�ڸ� Ȯ�� �� pi�� ���������� ���� �� ���
	cout << setw(10) << setfill('0') << pi << endl; // ������ 0���� ä���
	cout << setfill(' ');						    // �� ���� ����
	
	cout << setprecision(5) << pi << endl;          // ��ȿ���ڸ� ������ ������ŭ ���

	
	// ���ݺ��� ������ ������� iomanip ��������� �ʿ������ �� ������ ������ �����
	
	cout.width(10);		// ������ ����� �� 10�ڸ� Ȯ�� �� ���������� ����
	cout << pi << endl;

	cout.width(10);
	cout.fill('0');     // ������ ����� �� ������ 0���� ä���(width�� ���)
	cout << pi << endl;
	cout.fill(' ');     // ������ �ٽ� �ʱ�ȭ 

	double ex_num = 123.456;

	cout.precision(1);       // ��ȿ���ڰ��� ����
	cout << ex_num << endl;  // 1e+02�� 1 x 10^2, �� 100�� ����
	
	cout.precision(2);
	cout << ex_num << endl;  // 1.2e+02�� 1.2 x 10^2, �� 120�� ����

	cout.precision(0);       // precision ����
	

	cout << ex_num << endl;
	cout << fixed;		    // �Ҽ��� ����
	cout << ex_num << endl; 
	cout.precision(2);      // fixed �Լ��� �� �� ����ϸ� ���� �κ��� ������ �� �Ҽ��� �Ʒ� ��ȿ���ڰ� ������
	cout << ex_num << endl;
	



	
	cout.width(5);							// 5�ڸ� Ȯ��
	cout.setf(ios::left, ios::adjustfield); // �������� ����
	cout << "Hi" << endl;                  

	cout.width(5);                           // 5�ڸ� Ȯ��
	cout.setf(ios::right, ios::adjustfield); // ���������� ����
	cout << "Hi" << endl;


	return 0;
}