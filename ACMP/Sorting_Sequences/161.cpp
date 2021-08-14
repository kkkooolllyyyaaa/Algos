#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> pi(n);
    vector<int> ans(n);
    vector<bool> used(n + 1, false);
    for (int i = 0; i < n; ++i) {
        cin >> pi[i];
    }
    for (int i = n - 1; i >= 0; --i) {
        int used_count = 0, j = n;
        while (used_count != pi[i]) {
            if (used[j] == false) {
                ++used_count;
            }
            --j;
        }
        while (used[j]) {
            --j;
        }
        ans[i] = j;
        used[j] = true;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
