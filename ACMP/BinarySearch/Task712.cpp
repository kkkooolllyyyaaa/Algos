#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
typedef unsigned long long ll;
ll w, h, n;
ll bin(ll l, ll r) {
	ll pos = (l + r) / 2;
	while ((r-l)>1) {
		pos = (l + r) / 2;
		if ((ll(pos / w) * ll(pos / h)) < n) {
			l = pos;
		}
		else {
			r = pos;
		}
	}
	return r;
}
int main() {
	cin >> w >> h >> n;
	ll s;
	s = bin(min(w, h), max(w, h)*n+1);
	while (true) {
		if ((ll((s-1) / w) * ll((s-1) / h)) >= n) {
			s--;
		}
		else {
			break;
		}
	}
	cout << s << endl;
	return 0;
}
