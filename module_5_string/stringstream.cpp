#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s); // this helps to separate words by space
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
    return 0;
}