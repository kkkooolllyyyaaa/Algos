#include <iostream>
#include <map>
using namespace std;
typedef unsigned long long int ll;
int main() {
    ll x, i = 2, ans = 1;
    cin >> x;
    map<int, int> div;
    while (x > 1) {
        if (x % i == 0) {
            if (div.find(i) == div.end()) {
                div[i] = 1;
            } else
                div[i]++;
            x = x / i;
        } else
            i++;
    }

    for (auto s: div)
        ans = ans * (s.second + 1);
    cout << ans << endl;
    return 0;
}
