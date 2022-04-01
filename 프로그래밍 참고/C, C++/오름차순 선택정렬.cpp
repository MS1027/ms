#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1, 3, 5, 2, 4 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				int hold = a[i];
				a[i] = a[j];
				a[j] = hold;
			}
		}
	}
	
	for (int k = 0; k < 5; k++)
	{
		cout << a[k] << ' ';
	}
	cout << endl;

	return 0;
}