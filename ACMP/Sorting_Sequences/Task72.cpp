#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	char g;
	cin>>s;	
	int a[100],l=s.length(),mi=1000,m,k;
	for(int i=0;i<l;i++){
		a[i]=(s[i]-'0');
	}
	for(int i=l-2;i>=0;i--){
		if(a[i]<a[i+1]){ k=i+1;
			for(int j=i+1;j<l;j++){
				if(a[j]>a[i] && a[j]<mi){
					mi=a[j]; m=j; 			
				}
			}
		swap(a[i],a[m]); break; 
		}
	}
	sort(a+k,a+l);
	for(int i=0;i<l;i++){g=(a[i]+'0'); cout<<g;
	}
	return 0;
}
