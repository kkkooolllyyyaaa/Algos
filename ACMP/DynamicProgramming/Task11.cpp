#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
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
int main() {
	long long int n, k; 
	cin >> k >> n;
	vector<string>s(400);
	for (int i = 0; i <= 390; i++) {
		s[i] = 0;
	}
	s[0] = 1;
	s[1] = 1;
	if ((k == 1) || (n == 1)) { cout << 1 << endl; return 0; }
	for (long long int i = 2; i <= n; i++) {
		for (long long int j = k; j >= 1; j--) {
			if ((i - j) >= 0) {
				s[i]=(Summa(s[i], s[i - j]));
			}
		}
	}
	cout << s[n] << ' ';
	return 0;
}
