#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m, ans = 0;
    cin >> n >> m;
    if (m > n) {
        cout << 0 << endl;
        return 0;
    } else if (m == n || m == 0) {
        cout << 1 << endl;
        return 0;
    } else if (m == 1) {
        cout << n << endl;
        return 0;
    }
    int distance = 0;
    while (true) {
        int cnt = 0, stop;
        for (int i = 0; i < n; i = i + distance + 1) {
            cnt++;
            if (cnt == m) {
                stop = i;
                break;
            }
        }
        distance++;
        if (m == cnt)
            ans = ans + (n - stop);
        else
            break;
    }
    cout << ans << endl;

    return 0;
}

