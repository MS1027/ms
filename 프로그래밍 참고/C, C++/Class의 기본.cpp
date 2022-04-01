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
	데이터(변수)를 public에 두지 말고 private에 두자. (그저 암묵적 룰)
	대신 데이터에 접근을 위해 데이터값을 return하는 함수를 새로 만들자.
	위 데이터처럼 아무것도 지정하지 않았을 경우엔 private이 됨
	*/
	Account (const string& customer_name, int account_number, double amount) :
					name(customer_name), id(account_number), balance(amount) { // initialization list... 표현을 숙지해두자
		if (amount < 0) {
			cout << "Warning: negative account balance" << endl;
			balance = 0.0;
		}
	} // constructor 선언

	Account()
	{} // 아무 것도 하지 않는 default construntor인데 사용자 정의 constructor를 만듦과 동시에 만들어줘야 함
	
	void deposit(double amt) {
		balance += amt;
	} // 예금을 처리하는 함수
	
	bool withdraw(double amt) {
		bool result = false;
		if (balance - amt >= 0) {
			balance -= amt;
			result = true;
		} // 출금 후 잔액이 0원 이상일 경우 수행
		return result;
	} // 출금을 처리하는 함수

	void display() {
		cout << "Name: " << name << ", ID: " << id << ", Balance: " << balance << endl;
	} // 계좌정보를 출력하는 함수

}; // 클래스 생성 시 세미콜론을 붙여줌

int main() {

	Account acct1("MS", 1027, 1000.0); // constructor에 맞춰 인스턴스를 선언

	acct1.display();
	acct1.deposit(100.0);
	acct1.display();

	return 0;
}
/*
한 가지 덧붙이자면,
클래스의 인스턴스를 생성할 때 인스턴스로 이루어진 vector를 생성하는 것이 가능함
예를 들어, vector<Account> accounts(5000);이라고 하면 Account클래스의 인스턴스 5000개로 이루어진 vector를 생성하는 것
다른 함수에서 Account의 인스턴스를 하나 만든 후 push_back과 pop_back을 통해 vector에 추가/제거를 하는 방식으로 사용 가능
*/