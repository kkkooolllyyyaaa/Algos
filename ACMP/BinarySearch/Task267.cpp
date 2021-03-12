#include<iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ll;
ll n,x,y;
ll bin(ll l, ll r) {
	ll pos = (l + r) / 2;
	while((r-l)>0){
		pos=(l+r)/2;
		if((((pos-x)/x)+((pos-x)/y)+1)<n){
			l=pos+1;
		}
		else if((((pos-x)/x)+((pos-x)/y)+1)>=n){
			r=pos;
		}
	}
	return l;
}
int main() {
	cin>>n>>x>>y;
	if(y<x){
		swap(x,y);
	}
	cout<<bin(x,1000000000000000000)<<endl;
	return 0;
}
