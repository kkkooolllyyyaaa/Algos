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
vector<int>t(10001,0);
ll n,m,cnt=0,len,x;
void upd(int k, int d)
{
//  arr[k]+=d;
    while(k<n)
    {
        t[k]+=d;
        k=(k|(k+1));
    }
}
int G(int ch){
    return ch&(ch+1);
}
int sum(int R)
{
    int res=0;
    while (R >= 0) {
        res += t[R];
        R = G( R ) - 1;
    }
    return res;
}
int main() {
    cin>>n>>m;
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++) t[j]=0;
        for(int j=0; j<n; j++){
            scanf(%d,&x);
            cnt = cnt-sum(x-1) + sum(n-1);
            upd(x-1, 1);
        }
        //cout<<cnt<<endl;
    }
    cout<<cnt<<endl;
    //system(pause);
    return 0;
}
