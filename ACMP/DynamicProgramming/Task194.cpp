#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
	ll n, k = 0, dp[100] = { 0 };
	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 4;
	dp[5] = 6;
	ll j = 3;
	for (int i = 6; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] - dp[i-5];
	}
	cout << dp[n] << endl;
	return 0;
}
