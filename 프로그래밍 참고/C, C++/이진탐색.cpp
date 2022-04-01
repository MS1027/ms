#include <iostream>
using namespace std;

int search(int[], int);
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int num;

	cout << "Input: ";
	cin >> num;

	int res = search(a, num);

	if (res != -1)
		cout << "Element found at " << res << " index" << endl;
	else
		cout << "Not Found" << endl;
	

	return 0;
}
int search(int a[], int n)
{
	int f, l, m;
	f = 0;
	l = 4;
	
	while (f <= l)
	{
		m = (f + l) / 2;
		if (n == a[m])
		{
			return m;
		}
		else
			if (n > a[m])
				f = m + 1;
			else
				l = m - 1;
	}
	return -1;
}