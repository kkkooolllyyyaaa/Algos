#include<iostream> 
#include<cmath> 
#include<stdio.h> 
using namespace std;
int main() {
	long long int n, a[10000];
	cin >> n;
	a[n + 1] = 0;
	a[n + 2] = 0;
	a[n] = 1;
	a[n - 1] = 1;
	a[n - 2] = 2;
	a[n - 3] = 4;
	for (long long int i = n-4; i >= 0; i--) {
		a[i] = a[i + 1] + a[i + 2] + a[i + 3];
	}
	cout << a[0] << endl;
	return 0;
}
