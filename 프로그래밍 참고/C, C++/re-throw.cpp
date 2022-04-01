#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void filter(const vector<int>& v, int index) {
	try {
		cout << v.at(index) << endl;
	}
	catch (exception & e) {
		cout << setw(15) << "filter():" << e.what() << endl;
		throw e; // �� ������ ���ٸ� compute���� catch���� ����
	}
}

void compute(const vector<int>& v, int index) {
	try {
		filter(v, index);
	}
	catch (exception & e) { // filter���� re-throw�߱� ������ �ߵ� ��
		cout << setw(15) << "compute():" << e.what() << endl;
		throw e; // �� ������ ���ٸ� main���� catch���� ����
	}
}

int main() {
	try {
		vector<int> v{ 1,2,3,4 };
		int index;
		cin >> index;
		compute(v, index);
	}
	catch (exception & e) { // compute���� re-throw�߱� ������ �ߵ� ��
		cout << setw(15) << "main():" << e.what() << endl;
	}
	return 0;
}