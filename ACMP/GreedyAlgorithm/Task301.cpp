#include <iostream>
#include <string>
using namespace std;
int main() {
	int s, k,su=0,sum=0;
	string str,st;
	cin >> s >> k;
	st.push_back('1');
	str.push_back('9');
	for (int i = 2; i <= k; i++) {
		str.push_back('9');
		st.push_back('0');
	}
	su = 9 * k;
	for (int i = str.length() - 1; i >= 0; i--) {
		if (su - s <= 9) {
			str[i] = char(str[i] - char(su - s)); break;
		}
		else {
			str[i] = '0';
			su = su - 9;
		}
	}
	cout << str << ' ';
	sum = 1;
	for (int i = st.length()-1; i >= 0; i--) {
		if (s - sum <= 9) {
			st[i] = char(st[i] + char(s - sum)); break;
		}
		else {
			st[i] = '9';
			sum = sum + 9;
		}
	}
	cout << st << endl;
	return 0;
}
