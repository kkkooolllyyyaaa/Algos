#include <iostream>
#include<stdio.h>
#include<cmath>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
typedef long long int ll;
int er[50001];
int main() {
	ll n, k = 0,c=0;
	cin >> n;
	er[1] = 1;
	for (int i = 2; i <= 50000; i++) {
		if (er[i] == 0) {
			k++;
			if (er[k] == 0) {
				c++;
			}
			if ((c) == n) {
				cout << i << endl;
				return 0;
			}
			for (int j = i * i; j <= 50000; j += i) {
				er[j] = 1;
			}
		}
	}
	return 0;
}
