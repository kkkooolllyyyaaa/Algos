#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int main() {
	int n, m, k = 0; char c;
	cin >> n >> m >> c;
	string str;
	vector<string>s1;
	vector<string>s2;
	for (int i = 0; i < n; i++) {
		cin >> str;
		reverse(str.begin(), str.end());
		if (str[1] == 'T') str[1] = 'A';
		else if (str[1] == 'J') str[1] = 'B';
		else if (str[1] == 'Q') str[1] = 'C';
		else if (str[1] == 'K') str[1] = 'D';
		else if (str[1] == 'A') str[1] = 'E';
		s1.push_back(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		reverse(str.begin(), str.end());
		if (str[1] == 'T') str[1] = 'A';
		else if (str[1] == 'J') str[1] = 'B';
		else if (str[1] == 'Q') str[1] = 'C';
		else if (str[1] == 'K') str[1] = 'D';
		else if (str[1] == 'A') str[1] = 'E';
		s2.push_back(str);
	}
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	for (int i = 0; i < m; i++) {
		for (int I = 0; I < n; I++) {
			if (s2[i] != 00 && s1[I] != 00 && s2[i][0] == s1[I][0] && s2[i][1] < s1[I][1]) { s2[i] = 00; s1[I] = 00; break; }
		}
	}
	for (int i = 0; i < m; i++) {
		if (s2[i] != 00) {
			for (int j = 0; j < n; j++) {
				if (s1[j] != 00) {
					if (s1[j][0] != s2[i][0] && s1[j][0] == c) {
						s1[j] = 00; s2[i] = 00; break;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		if (s2[i] == 00) k++;
	}
	if (k == m) {
		cout << YES << endl;
	}
	else cout << NO << endl;
	return 0;
}
