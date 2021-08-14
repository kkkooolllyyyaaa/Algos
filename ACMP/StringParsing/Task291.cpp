#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, a[300] = { 0 }, k = 0, c = 1, b[300] = { 0 };
	vector<string>str;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		str.push_back(s);
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		a[s[i]]++;
		b[s[i]]++;
	}
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < str[i].length(); j++) {
			a[str[i][j]]--;
			if (a[str[i][j]] < 0) {
				for (int i = 0; i < 280; i++) {
					a[i] = b[i];
				}
				break;
			}
			else if (j == (str[i].length() - 1)) {
				k++;
				for (int i = 0; i < 280; i++) {
					a[i] = b[i];
				}
				break;
			}
		}

	}
	cout << k << endl;
	return 0;
}
