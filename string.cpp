#include <iostream>

using namespace std;

int main() {

	char s[100];
	char t[100];

	cout << "输入主串" << endl;
	cin >> s;
	while ((getchar()) != '\n');
	cout << "输入模式串" << endl;
	cin >> t;
	while ((getchar()) != '\n');

	int s1 = 0;int t1 = 0;
	while (s[s1] != '\0') {
		s1++;
	}
	while (t[t1] != '\0') {
		t1++;
	}

	int si = 0; int ti = 0; int label = 0;
	for (int i = 0; i < s1; i++) {
		if (s[i] == t[0]) {
			si = i;
			ti = 0;
			label = 0;
			for (int j = 0; j < t1; j++) {
				if (s[si + j] == t[ti + j]) {
					label++;
				}
				else {
					break;
				}
				if (label == t1) {
					cout << "开始于第" << si + 1 << "个字符" << endl;
					while (1);
				}
			}
		}
	}

	cout << "不能匹配" << endl;
	while (1);

	return 0;
}
