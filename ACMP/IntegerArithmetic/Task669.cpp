#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<long long int>del;
	vector<long long int>dele;
	long long int n, m;
	cin >> n;
	m = n;
	for (int i = 9; i >= 2; i--) {
		while (n % i == 0) {
			del.push_back(i);
			n = n / i;
		}
	}
	if (n > 1) {
		cout << -1 << ' ';
	}
	else {
		sort(del.begin(), del.end());
		for (long long int i = 0; i < del.size(); i++) {
			if (del[i] != 0) {
				cout << del[i];
			}
		}
		cout << ' ';
	}


	for (int i = 7; i >= 2; i--) {
		if (i != 6 && i != 4) {
			while (m%i == 0) {
				dele.push_back(i);
				m = m / i;
			}
		}
	}
	if (m > 1) {
		cout << -1 << endl;
	}
	else {
		for (long long int i = 0; i < dele.size(); i++) {
			if (dele[i] != 0) {
				cout << dele[i];
			}
		}
	}
	return 0;
}
