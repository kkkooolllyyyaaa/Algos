#include <iostream>
#include <climits>
using namespace std;
int a[200][200];
int main (){
	int n,min;
	min=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int r=j+1;r<=n;r++){
				if(a[i][j]+a[j][r]+a[r][i]<min)
						min=a[i][j]+a[j][r]+a[r][i];
			}
		}
	}
	cout<<min<<endl;
	return 0;
}
