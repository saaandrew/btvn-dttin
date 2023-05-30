#include <bits/stdc++.h>
using namespace std;

bool PRM(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    freopen("Bai2.inp", "r", stdin);
    freopen("Bai2.out", "w", stdout);
    cin >> n;
    cout << "Cac thua so nguyen to cua " << n << " la: ";
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && PRM(i)) {
            cout << i << " ";
        }
    }
    return 0;
}