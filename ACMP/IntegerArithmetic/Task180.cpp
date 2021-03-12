#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<long long int>del;
	long long int n,res=0,k;
	cin >> k;
	cin >> n;
	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}
	for (int i = 9; i >= 2; i--) {
		while(n % i == 0) {
			del.push_back(i);
			n = n / i;
		}
	}
	if (n > 1) {
		cout << NO << endl;
		return 0;
	}
	sort(del.begin(), del.end());
	for (long long i = 0; i < del.size();i++) {
		if(del[i]!=0)
		res = res + int(float(pow(10, del.size()-i-1)))*del[i];
	}
	if (res <= k) {
		cout << YES << endl;
	}
	else {
		cout << NO << endl;
	}
	return 0;
}
