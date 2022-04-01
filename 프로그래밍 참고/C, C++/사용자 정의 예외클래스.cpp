#include <iostream>
#include <vector>

using namespace std;

class FileNotFoundException : public exception { // 모든 예외처리 클래스는 exception클래스를 반드시 상속받아야 함
private:
	string message;
public:
	FileNotFoundException(string _filename) :
		message("File " + _filename + "not found") {}
	const char *what() const throw() { // 항상 what 메소드를 오버라이딩 해야 하고, 문법적으로 반드시 throw()를 써줌 
		return message.c_str();
	}
};

void throw_example(int mode) {
	if (mode == 0)
		throw FileNotFoundException("aaa.txt"); // 오류를 발생시킴
	else
		throw out_of_range("OUT OF RANGE");
}

int main() {
	try {
		throw_example(1);
	}
	catch (FileNotFoundException& e) {
		cout << "1. " << e.what() << endl;
	}
	catch (out_of_range & e) { // catch를 추가하여 예외마다 다르게 처리할 수 있음. 만약 여러 catch가 발동될 수 있다면 가장 먼저 있는 catch만 발동 됨
		cout << "2. " << e.what() << endl;
	}

	return 0;
}