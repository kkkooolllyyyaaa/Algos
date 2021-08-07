#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        cin >> perm[i];
    }
    int current = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (perm[j] == current) {
                cout << j + 1 << ' ';
                current++;
                break;
            }
        }
    }

    cout << n;
    return 0;
}


