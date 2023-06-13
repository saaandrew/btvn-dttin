#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("demtu.inp", "r", stdin);
    freopen("demtu.out", "w", stdout);

    string str;
    getline(cin, str);

    int count = 0;
    bool is_word = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            if (!is_word) {
                is_word = true;
                count++;
            }
        } else {
            is_word = false;
        }
    }

    cout << count;

    fclose(stdin);
    fclose(stdout);

    return 0;
}