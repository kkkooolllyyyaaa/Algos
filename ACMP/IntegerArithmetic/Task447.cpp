#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>
#include <climits>
#include <vector>
#include <utility>
using namespace std;
typedef long long int ll;
int main() {
	ll n, a[100001], x;
	cin >> n;
	a[1] = 1;
	a[2] = 2;
	for (ll i = 3; i <= n; i++) {
		a[i] = a[i - 1] * i;
		while (a[i] % 10 == 0) {
			a[i] = a[i] / 10;
		}
		a[i] = a[i] % 1000000;
	}
	while (a[n] > 0) {
		x = a[n] % 10;
		if (x != 0) {
			cout << x << endl;
			break;
		}
		a[n] = a[n] / 10;
	}
	//system(pause);
	return 0;
}
