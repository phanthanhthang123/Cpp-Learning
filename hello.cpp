#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, t = 0;
    cin >> n;
    int a[n + 1];

    for (int i = 1; i < n; i++) {
        cin >> a[i];
        t += a[i];
    }
    t /= 2;

    int f[10001];
    int d[10001] = {0};

    for (int i = 0; i <= t; i++) {
        f[i] = INT_MAX;
    }
    f[0] = 0;

    for (int i = 1; i < t; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= a[j] && j > f[i - a[j]]) {
                f[i] = j;
                break;
            }
        }
    }

    while (f[t] > n) {
        n--;
    }

    int temp = t;
    while (temp > 0) {
        d[f[temp]] = 1;
        temp -= a[f[temp]];
    }

    for (int i = 1; i <= n; i++) {
        if (d[i] == 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        if (d[i] != 1) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
