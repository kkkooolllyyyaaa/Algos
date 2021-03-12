#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
typedef long long ll;
string Summa(string str1, string str2) {
	int n1 = str1.length(), n2 = str2.length();
	if (n1 > n2) swap(str1, str2);
	string str;
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	int carry = 0;
	for (int i = 0; i < n1; i++) {
		int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	for (int i = n1; i < n2; i++) {
		int sum = ((str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry) str.push_back(carry + '0');
	reverse(str.begin(), str.end());
	return str;
}
int fu(char a, char b) {
	ll s;
	s = (a - '0') * 10 + (b - '0');
	if (s <= 33 && s >= 10) {
		return 1;
	}
	else return 0;
}
int main() {
	string str;
	string a[1001];
	cin >> str;
	a[0] = 1;
	if (fu(str[0], str[1]) == 1) {
		a[1] = 2;
	}
	else a[1] = 1;
	for (ll i = 2; i < str.length(); i++) {
		a[i] = a[i - 1];
		if (fu(str[i - 1], str[i]) == 1) {
			a[i] = Summa(a[i - 2],a[i]);
		}
	}
	cout << a[str.length() - 1] << endl;
	return 0;
}
