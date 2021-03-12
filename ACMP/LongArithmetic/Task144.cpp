#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
using namespace std;
vector<string> otv;
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
string proiz(string s1, string s2) {
	string str, s3 = ;
	int l1 = s1.length(), l2 = s2.length(), ost = 0, z, t = 0;
	reverse(s2.begin(), s2.end());
	reverse(s1.begin(), s1.end());
	for (int i = 0; i < l1; i++) {
		str = s3;
		ost = 0;
		for (int j = 0; j < l2; j++) {
			z = (s1[i] - '0')*(s2[j] - '0');
			str.push_back(z % 10 + ost + '0');
			ost = z / 10;		
		}
		if (ost > 0) {
			str.push_back(ost + '0');
		}
		reverse(str.begin(), str.end());
		for (int c = 0; c < t; c++) {
			str.push_back('0');
		}
		t++;
		otv.push_back(str);
	}
	str = otv[0];
	for (int i = 1; i < otv.size(); i++) {
		str = Summa(str, otv[i]);
	}
	t = 0;
	for (int i = 0; i < str.length()-1; i++) {
		if (str[i] == '0' && str[i] == str[i + 1]) {
			t++;
		}
	}
	if (t == str.length() - 1) return 0;
	return str;
}
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << proiz(s1, s2) << endl;
	return 0;
}
