#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
typedef long long int ll;

string perevod(ll x) {
    string value;
    while (x > 0) {
        value.push_back(x % 2 + '0');
        x = x / 2;
    }
    return value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ans = 10000000, sum = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll start = ll(pow(2.0, n - 1)), end = ll(pow(2.0, n)) - 1;
    for (ll i = start; i <= end; i++) {
        string mask = perevod(i);
        ll current = 0;
        for (ll j = 0; j < mask.length(); j++) {
            if (mask[j] == '1')
                current += a[j];
        }
        if (abs(sum - current - current) < ans)
            ans = abs(sum - current - current);
    }
    cout << ans << endl;
    return 0;
}
