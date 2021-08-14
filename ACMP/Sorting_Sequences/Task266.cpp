#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a[1005][5];
    int time[1440] = {0};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
        int time1 = a[i][1] * 60 + a[i][2];
        int time2 = a[i][3] * 60 + a[i][4];
        if (time1 > time2) {
            for (int j = 0; j < time2; j++) {
                time[j]++;
            }
            time2 = 1440;
        } else if (time1 == time2) {
            time1 = 0;
            time2 = 1440;
        }
        for (int j = time1; j < time2; j++) {
            time[j]++;
        }
    }
    int k = 0;
    for (int i = 0; i < 1440; i++) {
        if (time[i] == n)
            k++;
    }
    cout << k << endl;
    return 0;
}
