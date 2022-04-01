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
	
	try { // process�Լ��� at() ȣ��������� ������ �߻������� main���� try-catch ��� ����(process�� main�� �� �� ���� �� process������ �ߵ�)
		cout << process(v, index) << endl;
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}

	cout << "Program is still running" << endl;
	
	return 0;
}