#include<iostream>
using namespace std;
int c[300];
int main () {
	int n,m,a[10000][10]; cin>>n>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=2;j++){
			cin>>a[i][j];
			c[a[i][j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<c[i]<<endl;
	}
	return 0;
}
