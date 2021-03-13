#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
typedef unsigned long long int ll;
int main() {
    ll n,x=1;
    cin>>n;
    if(n<4){
        cout<<n<<endl;
        return 0;
    }
    while(n>=4){
        n-=3;
        x*=3;
    }
    if(n==3)
        x*=3;
    else if(n==2)
        x*=2;
    else if(n==1)
        x=x/3*4;
    cout<<x<<endl;
    return 0;
}
