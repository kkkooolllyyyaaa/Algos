#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
long long int fact(long long int a) {
	if (a == 0) {
		return 1;
	}
	long long int p = 1;
	for (long long int i = 2; i <= a; i++) {
		p = p * i;
	}
	return p;
}
int main() {
	long long int n, m,s=0;
	cin >> n >> m;
	for (long long int i = m; i <= n; i++) {
		s = s + fact(n) / ((fact(n - i))*fact(i));
	}
	cout << s << endl;
	return 0;
}
