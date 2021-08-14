#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main() {
	long long int n, a[10],max=-1000,k=0,b,x,t=0;
	cin>>n;
	cin>>a[1];
	if(n==1){ cout<<1<<endl; return 0; }
	cin>>a[2];
	if(a[1]>a[2]){ b=1; k=2; }
	else if(a[1]<a[2]){ b=2; k=2; }
	else { b=0; k=1; }
	swap(a[1],a[2]);
	max=k;
	for(long long int i=3;i<=n;i++){
		cin>>x;
		a[2]=x;
		if((a[2]>a[1]) && (b==1 || b==0)){ k=k+1; if(k>max){ max=k; } b=2; }
		else if((a[2]<a[1]) && (b==2 || b==0)){ k=k+1; if(k>max) { max=k;} b=1; }
		else if(a[2]==a[1]) { k=1; b=0; if(k>max) max=k;} 
		else { if(a[2]<a[1]){ b=1; k=2; if(k>max) max=k;}  if(a[2]>a[1]){ b=2; k=2; if(k>max) max=k; } }
		swap(a[1],a[2]);
	}
	cout<<max<<endl;
	return 0;
}
