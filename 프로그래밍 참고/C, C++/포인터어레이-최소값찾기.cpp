#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 32,8,14,22,20 };
	int* ary = &a[0];
	int arySize = 5;
	int* pLast = ary + arySize - 1;
	int* pSm;
	int* pWalk;
	for (pSm = ary, pWalk = ary + 1; pWalk <= pLast; pWalk++)
	{
		if (*pWalk < *pSm)
			pSm = pWalk;
	}
	cout << *pSm << endl;

	
	return 0;
}