#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    freopen("Bai12.inp", "r", stdin);
    freopen("Bai12.out", "w", stdout);
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        int asciiVAL = int(str[i]);
        cout << "Ma ASCII cua " << str[i] << " la: " << asciiVAL << endl;
    }

    return 0;
}