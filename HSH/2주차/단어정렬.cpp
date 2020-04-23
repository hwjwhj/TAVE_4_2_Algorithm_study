#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// �� �Լ� -> ���ڿ� ���̸� ���Ѵ�. ������
bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;	// �ƽ�Ű ���� ũ�� z�� ������
	}
	else {
		return a.size() < b.size();
	}
}
int main() {

	vector <string> a;
	string temp;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		a.push_back(word);
	}

	sort(a.begin(), a.end(), compare);

	for (int i = 0; i < n; i++) {

		if (temp == a[i])
			continue;

		cout << a[i] << '\n';
		temp = a[i];
	}
	return 0;
}
/*
string���� �ܾ �ް� sort �Լ��� �̿��� ������ �ϴµ� compare �Լ��� ���� ���̼����� ��ȯ�� �� �Ŀ�

���̰� ���ٸ� �˹ٺ������� �������� ������ �ϴ� �����̴�.

string size �Լ��� �̿��� ���̸� �ľ��ϰ� ���̰� ���ٸ� �ܼ� �񱳸� ���� �Լ�
*/