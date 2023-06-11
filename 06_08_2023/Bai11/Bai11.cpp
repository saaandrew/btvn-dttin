#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream input("Bai11.inp");
    ofstream output("Bai11.out");
    string str;
    getline(input, str);
    
    reverse(str.begin(), str.end());

    int start = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }
    reverse(str.begin() + start, str.end());

    output << str;
    
    input.close();
    output.close(); 
    
    return 0;
}