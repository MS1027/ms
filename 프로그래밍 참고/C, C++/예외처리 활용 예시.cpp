#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class FileNotFoundException : public exception { // ����� ���� ����Ŭ����
private:
	string message;
public:
	FileNotFoundException(string _filename)
		: message("File " + _filename + " not found") {}
	const char* what() const throw() {
		return message.c_str(); // c_str : string -> char[](const char*)�� ��ȯ���ִ� �޼ҵ�
	}
};

vector<int> load_vector(string filename) {
	ifstream fin(filename); // ��ü ����� ���ÿ� open
	
	if (fin) { // ������ ���������� ������ ���
		vector<int> result;
		int n, value;

		fin >> n;

		for (int i = 0; i < n; i++) {
			fin >> value;
			result.push_back(value);
		}

		fin.close();

		return result;
	}
	else { // ������ ���������� ������ �ʾ��� ���
		throw FileNotFoundException(filename);
	}
	
}
// try: ���ܰ� �߻��� �� �ִ� �κ�
// catch: ���ܰ� �߻����� �� �����ϴ� �κ�
// throw: exception ��ü(handler)�� catch�� ����
int main() {
	try {
		vector<int> vec = load_vector("values.txt");

		for (int elem : vec)
			cout << elem << "\t";
		cout << endl;
	}
	catch (FileNotFoundException & e) {
		cout << e.what() << endl;
	}

	return 0;
}