#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int long long n,a,b,c,d;
	cin>>n;
	a=n/2+n/3+n/5;
	b=n/(2*3)+n/(2*5)+n/(3*5);
	c=n/(2*3*5);
	cout<<n-a+b-c<<endl;
	return 0;
}

