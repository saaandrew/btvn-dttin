#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int count = 0;

    freopen("nguyenam.inp", "r", stdin);
    freopen("nguyenam.out", "w", stdout);

    while (scanf("%c", &ch) == 1)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("%d", count);
    return 0;
}