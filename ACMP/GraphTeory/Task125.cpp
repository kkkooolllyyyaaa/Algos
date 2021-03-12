#include<iostream>
using namespace std;
int c[150];
int main () {
	int n,a[110][110],color[101],k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(int i=1;i<=n;i++) cin>>color[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 && a[j][i]==1 && color[i]!=color[j]){
				k++;
				a[i][j]=0;
				a[j][i]=0;
			}
		}
	}
	cout<<k<<endl;
	return 0;
}
