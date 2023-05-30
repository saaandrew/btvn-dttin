#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Bai1.inp","r", stdin);
    freopen("Bai1.out","w", stdout);
    int n, res, tmp;
    cin >> n;
    res = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (res > tmp){
            res = tmp;
        }
    }
    cout << res;
    return 0;
}
