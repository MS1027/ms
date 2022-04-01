#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
	string name;
	int id;
	double balance;

public:
	/*
	������(����)�� public�� ���� ���� private�� ����. (���� �Ϲ��� ��)
	��� �����Ϳ� ������ ���� �����Ͱ��� return�ϴ� �Լ��� ���� ������.
	�� ������ó�� �ƹ��͵� �������� �ʾ��� ��쿣 private�� ��
	*/
	Account (const string& customer_name, int account_number, double amount) :
					name(customer_name), id(account_number), balance(amount) { // initialization list... ǥ���� �����ص���
		if (amount < 0) {
			cout << "Warning: negative account balance" << endl;
			balance = 0.0;
		}
	} // constructor ����

	Account()
	{} // �ƹ� �͵� ���� �ʴ� default construntor�ε� ����� ���� constructor�� ����� ���ÿ� �������� ��
	
	void deposit(double amt) {
		balance += amt;
	} // ������ ó���ϴ� �Լ�
	
	bool withdraw(double amt) {
		bool result = false;
		if (balance - amt >= 0) {
			balance -= amt;
			result = true;
		} // ��� �� �ܾ��� 0�� �̻��� ��� ����
		return result;
	} // ����� ó���ϴ� �Լ�

	void display() {
		cout << "Name: " << name << ", ID: " << id << ", Balance: " << balance << endl;
	} // ���������� ����ϴ� �Լ�

}; // Ŭ���� ���� �� �����ݷ��� �ٿ���

int main() {

	Account acct1("MS", 1027, 1000.0); // constructor�� ���� �ν��Ͻ��� ����

	acct1.display();
	acct1.deposit(100.0);
	acct1.display();

	return 0;
}
/*
�� ���� �������ڸ�,
Ŭ������ �ν��Ͻ��� ������ �� �ν��Ͻ��� �̷���� vector�� �����ϴ� ���� ������
���� ���, vector<Account> accounts(5000);�̶�� �ϸ� AccountŬ������ �ν��Ͻ� 5000���� �̷���� vector�� �����ϴ� ��
�ٸ� �Լ����� Account�� �ν��Ͻ��� �ϳ� ���� �� push_back�� pop_back�� ���� vector�� �߰�/���Ÿ� �ϴ� ������� ��� ����
*/