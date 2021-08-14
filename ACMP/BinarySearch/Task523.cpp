#include<iostream>
#include <cmath>
#include <climits>
#include <stdio.h>
using namespace std;
typedef unsigned long long ll;
ll n,k,a[200];
ll bin(ll l, ll r) {
	ll pos = (l + r) / 2;
	while((r-l)>0){
		pos=(l+r)/2;
		ll s=0,i=1,cnt=0;
		while(i<=n){
			while((s+a[i])<=pos){
				s+=a[i];
				i++;
				if(i>n) break;
			}
			s=0;
			cnt++;
		}
		if(cnt<=k){
			r=pos;
		}
		else{
			l=pos+1;
		}
	}
	return r;
}
int main() {
	ll ma=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>ma){
			ma=a[i];
		}
	}
	cin>>k;
	cout<<bin(ma,1000000000000000000);
	return 0;
}
