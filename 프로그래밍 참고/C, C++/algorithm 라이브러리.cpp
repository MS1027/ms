#include <iostream>
#include <functional>
#include <algorithm> // for_each, copy, transform
#include <vector>
using namespace std;

int main() {
	vector<int> v1{ 1,2,3,4 };
	for (int elem : v1)
		cout << elem << "\t"; // lambda: [](int elem){ cout << elem << "\t"; }
	cout << endl;

	// for_each(iter_begin, iter_end, lambda)
	// - Ư¡: lambda �Լ��� return�� ����(void)
	for_each(begin(v1), end(v1), [](int elem) { cout << elem << "\t"; });
	cout << endl;

	for_each(begin(v1), end(v1), [](int& elem) { elem++; });
	for_each(begin(v1), end(v1), [](int elem) { cout << elem << "\t"; });
	cout << endl;


	// for_each + closuer
	int a = 10;
	for_each(begin(v1), end(v1), [a](int& elem) { elem *= a; });
	for_each(begin(v1), end(v1), [](int elem) { cout << elem << "\t"; });
	cout << endl << endl;

	vector<int> v2(v1.size());
	// v1 = {20, 30, 40, 50}
	// v2 = {0,  0,  0,  0 }
	// copy(): src�� element�� dst�� ����
	// copy(iter_begin(src), iter_end(src), iter_begin(dst))
	copy(begin(v1)+1, end(v1)-1, begin(v2)+2);
	for_each(begin(v2), end(v2), [](int elem) { cout << elem << "\t"; });
	cout << endl << endl;

	// transform: for_each + copy�� ���ÿ�
	// transform(iter_begin(src), iter_end(src), iter_begin(dst), lambda);
	// - Ư¡: lambda �Լ��� return ���� (void �ƴ�)
	transform(begin(v1), end(v1), begin(v2), [](int elem) { return elem*elem; });
	for_each(begin(v2), end(v2), [](int elem) { cout << elem << "\t"; });


	return 0;
}