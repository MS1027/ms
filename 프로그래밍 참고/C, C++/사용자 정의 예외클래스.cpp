#include <iostream>
#include <vector>

using namespace std;

class FileNotFoundException : public exception { // ��� ����ó�� Ŭ������ exceptionŬ������ �ݵ�� ��ӹ޾ƾ� ��
private:
	string message;
public:
	FileNotFoundException(string _filename) :
		message("File " + _filename + "not found") {}
	const char *what() const throw() { // �׻� what �޼ҵ带 �������̵� �ؾ� �ϰ�, ���������� �ݵ�� throw()�� ���� 
		return message.c_str();
	}
};

void throw_example(int mode) {
	if (mode == 0)
		throw FileNotFoundException("aaa.txt"); // ������ �߻���Ŵ
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
	catch (out_of_range & e) { // catch�� �߰��Ͽ� ���ܸ��� �ٸ��� ó���� �� ����. ���� ���� catch�� �ߵ��� �� �ִٸ� ���� ���� �ִ� catch�� �ߵ� ��
		cout << "2. " << e.what() << endl;
	}

	return 0;
}