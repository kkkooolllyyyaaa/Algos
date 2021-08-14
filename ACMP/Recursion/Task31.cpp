#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n, k, depth = 1, ans = 0;
    string s;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        s.push_back(i + '0');
        depth *= i;
    }
    for (int i = 0; i < depth; i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == ((j + 1) + '0'))
                count++;
        }
        if (count == k)
            ans++;
        next_permutation(s.begin(), s.end());
    }
    cout << ans << endl;
    return 0;
}
