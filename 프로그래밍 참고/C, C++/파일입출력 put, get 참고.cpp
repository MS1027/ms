#include <iostream>
#include <fstream>
using namespace std;


int main(void)
{
	ifstream fsInFile;
	ofstream fsOutFile;
	cout << "Begin file copy" << endl;

	fsInFile.open("ch7FILE9.DAT");
	if (!fsInFile)
	{
		cerr << "\aError 100 opening ch7FILE9.DAT" << endl;
		exit(100);
	}

	fsOutFile.open("ch7FILE10.DAT");
	if (!fsOutFile)
	{
		cerr << "\aError 102 opening ch7FILE10.DAT" << endl;
		exit(102);
	}

	char aChar;
	while (fsInFile.get(aChar)) 
		fsOutFile.put(aChar); // ★한 글자 읽을 때마다 계속 카피★

	fsInFile.close();
	fsOutFile.close();

	cout << "\nEnd file copy" << endl;

	return 0;
}
