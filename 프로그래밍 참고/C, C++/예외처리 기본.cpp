#include <iostream>
#include <vector>

using namespace std;

// ����ó�� : try/catch Ű���带 ���
// 1. try: ���ܰ� �߻��� �� �ִ� �κ�
// 2. catch: try���� ���ܰ� �߻��� ��� ����Ǵ� ����
// - ����1: ���α׷��� ������� �ʰ� ��� ����
// - ����2: ���� tracking ����(����, ��ġ ��)
int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	try {
//		cout << v[index] << endl;		// []: primitive indexing operator (���������� ������� operator�̱⿡ catch�� �ߵ���Ű�� ����)
//		[]�� ����ϰ� �ʹٸ� ���ǹ��� �ɾ� ������ �߻����� �ʰ� �ϴ� ���� ����
		cout << v.at(index) << endl;	// at(): ����ó��(catch�� �ߵ�)�� ���� (ȿ���� �������� ����ó���� �� �Ǿ�����)
	}
	catch (exception & e) { // �� ���̾ �߰�ȣ�� ��� ��. exception: ����ó���� �ٷ�� class
		cout << e.what() << endl; // ���� ������ ���ڿ��� ��ȯ���ִ� exceptionŬ������ �޼ҵ�
	}

	cout << "Program is still running" << endl;

	return 0;
}