#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a[10],kv=1,ku=1,k=1,max=0,kc=1;
  for(int i=1;i<=5;i++){
    cin>>a[i];
  }
  sort(a,a+6);
  for(int i=2;i<=5;i++){
    if((a[i]-a[i-1])==1) kv++;
    if((a[i-1]-a[i])==1) ku++;
  }
  if(ku==5 || kv==5){ cout<<Straight<<endl; return 0; }
  for(int i=1;i<=4;i++){
    if(a[i]==a[i+1]) k++;
    if(k>max) max=k;
    if(a[i]!=a[i+1]) k=1;
  }
  ku=1; kv=1;
  for(int i=1;i<=4;i++){
	if(a[i]==a[i+1]) {ku++; kv=i;}
    if(a[i]!=a[i+1] && ku>1){ kv=i; break; }
  }
  for(int i=kv+1;i<=4;i++){
    if(a[i]==a[i+1]) kc++;
  }

  if(max==5){ cout<<Impossible<<endl; return 0; }
  if(max==4){ cout<<Four of a Kind<<endl; return 0; }
  if((ku==3 && kc==2) || (ku==2 && kc==3)){ cout<<Full House<<endl; return 0; }
  if(max==3){ cout<<Three of a Kind<<endl; return 0; }
  if(ku==2 && kc==2){ cout<<Two Pairs<<endl; return 0; }
  if(max==2){ cout<<One Pair<<endl; return 0; }
  cout<<Nothing<<endl;
  return 0;
}
