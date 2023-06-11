#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    freopen("Bai14.inp", "r", stdin);
    freopen("Bai14.out", "w", stdout);
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n.length(); i++) {
        sum += n[i] - '0';
    }

    if (sum % 3 == 0) {
        cout << "So " << n << " chia het cho 3" << endl;
    } else {
        cout << "So " << n << " khong chia het cho 3" << endl;
    }

    return 0;
}