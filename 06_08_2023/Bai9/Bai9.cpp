#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int count = 0;
    bool inWord = false; 
    
    ifstream inFile("Bai9.inp");
    ofstream outFile("Bai9.out");
    if (inFile.is_open() && outFile.is_open()){
    getline(inFile, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') { 
            if (!inWord) { 
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
            }
        }
    outFile << "So tu trong xau la: " << count << endl;
    inFile.close();
    outFile.close();
    }
    return 0;
    }