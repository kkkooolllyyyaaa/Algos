#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;
typedef long long int ll;
ll dp[300], x, n;
int main() {
	dp[0] = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		dp[i] = x;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n - i-1; j++) {
			cin >> x;
			dp[j + 1+i] = min(dp[j+i + 1], (dp[i + 1] + x));
		}
	}
	cout << dp[n] << endl;
	return 0;
}
