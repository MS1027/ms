#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class FileNotFoundException : public exception { // 사용자 정의 예외클래스
private:
	string message;
public:
	FileNotFoundException(string _filename)
		: message("File " + _filename + " not found") {}
	const char* what() const throw() {
		return message.c_str(); // c_str : string -> char[](const char*)로 변환해주는 메소드
	}
};

vector<int> load_vector(string filename) {
	ifstream fin(filename); // 객체 선언과 동시에 open
	
	if (fin) { // 파일이 정상적으로 열렸을 경우
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
	else { // 파일이 정상적으로 열리지 않았을 경우
		throw FileNotFoundException(filename);
	}
	
}
// try: 예외가 발생할 수 있는 부분
// catch: 예외가 발생했을 때 수행하는 부분
// throw: exception 객체(handler)를 catch에 전달
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