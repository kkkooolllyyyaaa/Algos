#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>
using namespace std;
int main() {
	int k = 0;
	vector<pair<int, int>>a(7);
	for (int i = 1; i <= 6; i++) {
		cin >> a[i].first;
		cin >> a[i].second;
		if (a[i].first > a[i].second) {
			swap(a[i].first, a[i].second);
		}
	}
	sort(a.begin(), a.end());
	if (a[1].first == a[2].first && a[2].first == a[3].first && a[3].first == a[4].first) {
		if (a[2].second == a[1].second && a[2].second == a[5].first && a[5].first == a[6].first) {
			if (a[3].second == a[4].second && a[4].second == a[5].second && a[5].second == a[6].second) {
				cout << POSSIBLE;
			}
			else cout << IMPOSSIBLE << endl;
		}
		else cout << IMPOSSIBLE << endl;
	}
	else cout << IMPOSSIBLE << endl;
	return 0;
}
