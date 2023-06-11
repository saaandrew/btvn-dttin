#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inFile("Bai10.inp");
    if (!inFile.is_open())
    {
        cout << "Khong the mo file Bai10.inp, vui long xem lai file." << endl;
        return 1;
    }

    string str;
    getline(inFile, str);

    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ 
        return islower(c) ? toupper(c) : tolower(c); 
    });

    inFile.close();

    ofstream outFile("Bai10.out");
    outFile << str;
    outFile.close();

    return 0;
}