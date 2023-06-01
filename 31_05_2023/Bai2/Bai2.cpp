#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }

    int chan_count = 0;
    int le_count = 0;
    int max_chan = -1;
    int max_le = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            chan_count++;
            if (a[i] > max_chan) {
                max_chan = a[i];
            }
        } else {
            le_count++;
            if (a[i] > max_le) {
                max_le = a[i];
            }
        }
    }

    cout << "So luong so chan: " << chan_count << endl;
    cout << "So luong so le: " << le_count << endl;
    cout << "So chan lon nhat: " << max_chan << endl;
    cout << "So le lon nhat: " << max_le << endl;

    return 0;
}