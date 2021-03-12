#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main() {
	long long int n, m,a,b,c=1000000000;
	cin >> n >> m;
	a = n;
	b = m;
	long long int fib[1000001];
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	do {
		if (a >= b) { a = a % b; }
		else { b = b % a; }
	} while (a*b > 0);

	for (long long int i = 3; i <= max(n,m); i++) {
		fib[i] = (fib[i - 1] + fib[i - 2])%c;
		if (i == (a + b)) {
			break;
		}
	}
	cout << fib[a + b];
	return 0;
}
