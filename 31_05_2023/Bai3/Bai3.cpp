#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100], n, x;
    bool exist = false;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    cout << "Nhap cac phan tu cua day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhap so can tim: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            exist = true;
            break;
        }
    }

    if (exist) {
        a[n] = x;
        n++;
        cout << "Day moi sau khi them " << x << " la: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    } else {
        cout << "Khong ton tai " << x << " trong day.";
    }

    return 0;
}