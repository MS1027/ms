#include <iostream>
#include <vector>

using namespace std;

// main() -> process() -> at(): throw exception
int process(const vector<int>& v, int index) {
	int value = v.at(index);
	return value;
}

int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	
	try { // process함수의 at() 호출과정에서 오류가 발생하지만 main에서 try-catch 사용 가능(process와 main에 둘 다 있을 시 process에서만 발동)
		cout << process(v, index) << endl;
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}

	cout << "Program is still running" << endl;
	
	return 0;
}