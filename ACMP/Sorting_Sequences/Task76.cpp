#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct visit_time_pair {
    string time1;
    string time2;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int time_arr[1440] = {0};
    vector<visit_time_pair> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].time1;
        cin >> a[i].time2;
        int start_hour = (a[i].time1[0] - '0') * 10 + (a[i].time1[1] - '0');
        int start_minute = (a[i].time1[3] - '0') * 10 + (a[i].time1[4] - '0');

        int end_hour = (a[i].time2[0] - '0') * 10 + (a[i].time2[1] - '0');
        int end_minute = (a[i].time2[3] - '0') * 10 + (a[i].time2[4] - '0');

        int sum_of_minutes1 = start_hour * 60 + start_minute;
        int sum_of_minutes2 = end_hour * 60 + end_minute;

        for (int j = sum_of_minutes1; j <= sum_of_minutes2; j++)
            time_arr[j]++;
    }
    int ma = 0;
    for (int i = 0; i <= 1439; i++) {
        if (time_arr[i] > ma)
            ma = time_arr[i];
    }
    cout << ma << endl;
    return 0;
}
