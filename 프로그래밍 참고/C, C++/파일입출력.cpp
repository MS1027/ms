#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	// ���Ͽ� ����
	ofstream myfile;					        // ofstream������ myfile���� ����
	string aline = "Writing this to a file.\n"; // ���Ͽ� ����� ���ڿ��� ������ ���� ����
	myfile.open("example_writing.txt");         // myfile������ ���� ���� ����
	myfile << aline;							// ���Ͽ� ���ڿ� ���
	while (aline != "quit") {					// ���ڿ��� quit�� �ƴ� ��� �ݺ�
		cout << "Enter a String to Writing('quit to terminate'): ";
		cin >> aline;
		if (aline == "quit")                    // ���ڿ��� quit�� ��� ����������
			break;
		myfile << aline << endl;
	}
	myfile.close();                        // ���� �ݱ�(�ʼ�)





	// ���Ϸκ��� �б�
	ifstream myfile2;					 // ifstream������ myfile2���� ����
	string line;						 // ���Ϸκ��� ���� ���ڿ��� ������ ���� ����
	myfile2.open("example_reading.txt"); // myfile2������ ���� ���� ����
	if (myfile2.is_open()) {			 // ������ ���������� ���������� True�� ��ȯ
		while (getline(myfile2, line)) { // ������ �� ��(���ڿ�)�� line ������ �����Ͽ� ��ȯ(���ڿ��� ������� ������ ��)
			cout << line << endl;
		}
	}
	else                                 // ������ ���������� ������ �ʾ��� �� ���
		cout << "File is not opened." << endl;

	return 0;
}