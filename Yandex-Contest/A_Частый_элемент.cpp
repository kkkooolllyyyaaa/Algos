#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int n,x;
int main() {
    map<int, int> a;
    auto it = a.begin();
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(a.find(x)==a.end())
            a[x]=1;
        else{
            a[x]=a[x]+1;
        }
    }
    int count = 0, chislo = 3;
    for(auto it: a){
        if(it.second>count){
            count=it.second;
            chislo=it.first;
        }
        else if (it.second==count){
            if(it.first>chislo)
                chislo=it.first;
        }
    }
    cout<<chislo<<endl;
    return 0;
}