#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;

int main(void) {

	int res = 0;
	string str;
	stack<int> mystack;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {

		if (str[i] == '(')	// ���� ��ȣ�̸� ���ÿ� ����
			mystack.push(1);
		else if (str[i] == ')') {	// �ݴ� ��ȣ�̸� ���� ��ȣ �ϳ��� ���ÿ��� ����
			mystack.pop();

			if (str[i - 1] == '(')	// ����, ��������� ������ ���� ����� ������� �� �� �߸��Ƿ� �� ���� ���� ��ȣ ����ŭ �߰�
				res += mystack.size();
			else					// ����, ������ ���̶�� ���� ���� �� 1 �߰�
				res++;
		}
	}

	printf("%d", res);
	return 0;
}