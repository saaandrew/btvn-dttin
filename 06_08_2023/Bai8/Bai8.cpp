#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    ifstream inFile("Bai8.inp");
    ofstream outFile("Bai8.out");
    if (inFile.is_open() && outFile.is_open()){
    getline(inFile, str);

    while (str[0] == ' ') {
        str.erase(0, 1);
    }
    while (str[str.length() - 1] == ' ') {
        str.erase(str.length() - 1, 1);
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') { 
            str.erase(i + 1, 1);
            i--;
            }
        }
    outFile << str << endl;
    inFile.close();
    outFile.close();
    }
    else {
        cout << "Khong the mo file" << endl;
    }
    return 0;
}