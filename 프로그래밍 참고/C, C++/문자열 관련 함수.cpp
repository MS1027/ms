#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word = "fred"; // ���ڿ� ����

	cout << word.length() << endl; // ���ڿ��� ���� ��ȯ
	cout << word.size() << endl;   // ���ڿ��� ���� ��ȯ (length()�� ����)





	if (word.empty()) // ���ڿ��� ��������� True ��ȯ
		cout << "Empty!" << endl;
	else
		cout << "Not Empty!" << endl;

	word.clear(); // ���ڿ����� ��(value)�� ����

	if (word.empty()) // ���ڿ��� ��������� True ��ȯ
		cout << "Empty!" << endl;
	else
		cout << "Not Empty!" << endl;





	word = "good";
	cout << word << endl;
	word += "-bye"; // ���ڿ��� ���ڿ��� ���ϱ�
	cout << word << endl;





	cout << "ù ��° ����: " << word[0] 
		<< " �� ��° ����: " << word[word.length() - 1] << endl; // �ε��� ����





	cout << word.substr(2) << endl;    // ���ڿ����� ������ �ڸ����� ������ �����̽��Ͽ� ��ȯ (������ ���ϴ� ���� �ƴ�)
	cout << word.substr(1, 3) << endl; // ���ڿ����� ������ ���� (����, ����)�� �����̽��Ͽ� ��ȯ (����: 0)





	if (word == "good-bye") // ���ڿ� �� (�� ���� ������ True ��ȯ)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}