#include <iostream>
#include <map>
using namespace std;
int main() {
    map<char, int> a;
    string s;
    unsigned long long int ans = 1, div;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        a[c]++;
        ans = ans * (i + 1);
    }
    for (auto kek : a) {
        div=1;
        for(int i=1;i<kek.second;i++){
            div=div*(i+1);
        }
        ans = ans / div;
    }
    cout << ans << endl;
    return 0;
}

