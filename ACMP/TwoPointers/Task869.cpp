#include <iostream> 
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
	int n, w, a[15001],k=0;
	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ix = 0, iy = n - 1;
	sort(a, a + n);
	while((ix-iy)<1) {
		if ((a[ix] + a[iy]) <= w) {
			a[ix] = -1; a[iy] = -1;
			ix++;
			iy--;
			k++;
		}
		else iy--;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != -1) {
			k++;
		}
	}
	cout << k << endl;
	return 0;
}
