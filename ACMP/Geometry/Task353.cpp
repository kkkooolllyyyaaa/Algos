#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    double s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int c = j + 1;
            while ((a[i] + a[j]) < a[c] && c < n) {
                c++;
                if (c == (n - 1)) {
                    c--;
                    break;
                }
            }
            double f = area(a[i], a[j], a[c]);
            if (f > s) {
                s = f;
            }
        }
    }
    if (abs(round(s) - s) <= 0.0001) {
        cout << round(s) << endl;
    } else {
        printf(%.3lfn, s);
    }
    return 0;
}
