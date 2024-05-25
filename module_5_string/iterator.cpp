#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sobuj";
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }

    cout << *s.begin() << endl;     // this points to first index
    cout << *(s.end() - 1) << endl; // this points to last+1 index

    // string iterator
    // string::iterator it; // this "it" is a pointer
    // for (it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it;
    // }
    // cout<<endl;

    // above code can also be written as
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }

    // iterator can also be written as auto
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }
    return 0;
}