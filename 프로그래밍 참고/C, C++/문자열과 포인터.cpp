#include <iostream>
using namespace std;

bool find_char(const char* s, char ch) {
	while (*s != '\0') { // ���ڿ��� ���� \0��
		if (*s == ch)
			return true;
		s++; // ���� �ε����� ����Ű���� ��
	}
	return false;
}

int main() {
	
	const char* phrase = "this is a phrase"; // phrase��� ������ �����Ͱ� '���ڿ�'�� ����Ű���� ����
	
	for (char ch = 'a'; ch <= 'z'; ch++) {
		cout << '\'' << ch << '\'' << "is ";
		if (!find_char(phrase, ch)) // ���ڿ� �ӿ� ������ ch�� ������ false�� ��ȯ�ϹǷ� �������� ���
			cout << "Not ";
		cout << "in " << '\"' << phrase << '\"' << endl; // �������� phrase�� *���� ����ϸ� ���ڿ� ��ü�� ���
	}

	return 0;
}