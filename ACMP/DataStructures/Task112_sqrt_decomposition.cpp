#include<iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <map>
#include <set>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
typedef long long ll;
ll n,m,cnt=0,len,x;
int main() {
    cin>>n>>m;
    len=n/100; if((n%100)!=0) len++;
    for(int i=0;i<m;i++){
        vector<ll>sq(101,0);
        vector<int>arr(10001,0);
        for(int j=0;j<n;j++){
            scanf(%d,&x);
            arr[x]=1;
            sq[x/100]++;
            for(int it=(x+1);it<=ll((x/100))*100+99;it++){
                if(arr[it]==1){
                    cnt++;
                }
            }
            for(int c=((x/100)+1);c<=100;c++){
                cnt+=sq[c];
            }
        }
        sq.clear();
        arr.clear();
    }
    cout<<cnt<<endl;
  //system(pause);
    return 0;
}
