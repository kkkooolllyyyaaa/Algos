#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b > a)
        swap(a, b);
    while (a * b > 0) {
        a = a % b;
        swap(a, b);
    }
    return a + b;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> perm(n);
    vector<int> used(n, 0);
    vector<int> loop_lens;

    for (int i = 0; i < n; ++i) {
        cin >> perm[i];
    }
    for (int i = 0; i < n; ++i) {
        if ((i + 1) == perm[i]) {
            continue;
        }
        if (used[i] == 0) {
            int goal = i, loop_len = 1, cur = perm[i] - 1;
            used[cur] = 1;
            while (cur != goal) {
                loop_len++;
                cur = perm[cur] - 1;
                used[cur] = 1;
            }
            loop_lens.push_back(loop_len);
        }
    }
    ll ans = loop_lens[0] * loop_lens[1] / gcd(loop_lens[0], loop_lens[1]);
    for (int i = 2; i < loop_lens.size(); ++i) {
        int temp = ans;
        ans = temp * loop_lens[i] / gcd(temp, loop_lens[i]);
    }
    if (loop_lens.size() == 1)
        cout << loop_lens[0] << endl;
    else
        cout << ans << endl;

    return 0;
}


