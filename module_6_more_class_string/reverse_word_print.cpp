#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        // cout << word << endl;
        print(ss);
        cout << word << endl; // printing words in reverse order
    }
}

int main()
{
    string s = "i am sobuj";
    stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    // recursive way
    print(ss);
    return 0;
}