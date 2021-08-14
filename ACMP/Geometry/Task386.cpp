#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<YES<<endl;
    for(int i=1;i<=n;i++){
        int x = rand()%20001-10000;
        int y = rand()%20001-10000;
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}

