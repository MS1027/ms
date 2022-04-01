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
		throw e; // 이 문장이 없다면 compute에서 catch되지 않음
	}
}

void compute(const vector<int>& v, int index) {
	try {
		filter(v, index);
	}
	catch (exception & e) { // filter에서 re-throw했기 때문에 발동 됨
		cout << setw(15) << "compute():" << e.what() << endl;
		throw e; // 이 문장이 없다면 main에서 catch되지 않음
	}
}

int main() {
	try {
		vector<int> v{ 1,2,3,4 };
		int index;
		cin >> index;
		compute(v, index);
	}
	catch (exception & e) { // compute에서 re-throw했기 때문에 발동 됨
		cout << setw(15) << "main():" << e.what() << endl;
	}
	return 0;
}