#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int ll;

ll ma(ll a, ll b) {
    if (a > b)
        return a;
    else return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool has_zero = false;
    cin >> n;
    ll a[1000005];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0)
            has_zero = true;
    }
    sort(a, a + n);
    if (has_zero) {
        cout << ma(0, ma(a[0] * a[1] * a[2], ma(a[0] * a[1] * a[n - 1],
                                                ma(a[0] * a[n - 1] * a[n - 2], (a[n - 1] * a[n - 2] * a[n - 3])))))
             << endl;
    } else
        cout << ma(a[0] * a[1] * a[2],
                   ma(a[0] * a[1] * a[n - 1], ma(a[0] * a[n - 1] * a[n - 2], (a[n - 1] * a[n - 2] * a[n - 3]))))
             << endl;
    return 0;
}
