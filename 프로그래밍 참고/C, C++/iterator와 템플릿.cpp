#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

template<typename Iter>
void print(const Iter& begin, const Iter& end) {
	for (Iter iter = begin; iter != end; iter++)
		cout << *iter << "\t";
	cout << endl;
}


int main() {
	vector<int> v{ 1, 2, 3 };
	list<double> l{ 1.1, 2.2, 3.3 };
	string sAry[] = { "Apple", "Bear", "Carrot" };

	print(begin(v), end(v));
	print(begin(l), end(l));
	print(begin(sAry), end(sAry));

	return 0;
}