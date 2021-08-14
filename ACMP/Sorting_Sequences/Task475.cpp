#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <stdio.h>
using namespace std;
int main() {
	long long n, a[100001], s = 0,i=0,k=0;
	while (cin >> a[i]) {
		s = s + a[i];
		i++;
	}
	sort(a, a + i);
	k = a[1] - a[0];
	for (int j = 2; j < i; j++) {
		if (a[j] - a[j - 1] != k) {
			cout << No << endl;
			return 0;
		}
	}
	cout << Yes << endl;
	return 0;
}
