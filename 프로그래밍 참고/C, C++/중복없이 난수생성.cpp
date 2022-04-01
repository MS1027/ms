#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		a[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				i--;
			}
		}
	}

	for (int k = 0; k < 6; k++)
	{
		cout << a[k] << ' ';
	}
	cout << endl;

	return 0;
}