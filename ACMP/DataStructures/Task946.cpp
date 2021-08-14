#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cctype>
#include <string.h>
#include <deque>
using namespace std;
typedef long long ll;
int main() {
	deque<int>dq;
	vector<int>ans;
	int n, x, y;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x == 1) {
			cin >> y;
			dq.push_front(y);
		}
		else if (x == 2) {
			cin >> y;
			dq.push_back(y);
		}
		
		else if (x == 3) {
			ans.push_back(dq.front());
			dq.pop_front();
		}
		else {
			ans.push_back(dq.back());
			dq.pop_back();
		}
	}
	for (int j = 0; j < ans.size(); j++) {
		cout << ans[j] << ' ';
	}
	return 0;
}
