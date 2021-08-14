#include <iostream> 
#include<string>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<long long int>del;
    long long int n, i = 2,k=0;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (n == 0) {
        cout << 10 << endl;
        return 0;
    }
    for (int i = 9; i >= 2; i--) {
        while(n % i == 0) {
            del.push_back(i);
            n = n / i;
        }
    }
    if (n > 1) {
        cout << -1 << endl;
        return 0;
    }
    sort(del.begin(), del.end());
    for (long long int i = 0; i < del.size(); i++) {
        if (del[i]!=0) {
            cout << del[i];
        }
    }
    cout << endl;
    return 0;
}
