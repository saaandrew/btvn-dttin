#include <bits/stdc++.h>
using namespace std;
int F(int n)
{
    if(n==0) return 0;
    if(n<=2) return 1;
    return F(n-1)+F(n-2);
}
int main()
{
    int n;
    freopen("Bai3.inp","r",stdin);
    freopen("Bai3.out","w",stdout);
    cin >> n;
    cout << F(n);
}