#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int a[10005];
int main (){
	int n,s;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=i+i;j<=n;j+=i){
			a[j]=1;
		}
	}
    int ans=0;
	for(int i=2;i<=n/2;i++){
		if(a[i]==0){
			s=n-i;
			for(int j=i;j<=n;j++){
				if(a[j]==0 && j==s){ ans++;  }
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
