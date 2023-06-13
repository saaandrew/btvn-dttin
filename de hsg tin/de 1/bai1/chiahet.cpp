#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, k;
    freopen("chiahet.inp", "r", stdin);
    freopen("chiahet.out", "w", stdout);
    cin >> m >> n >> k;

    int count = 0;
    for (int i = m; i <= n; i++) {
        if (i % k == 0) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}