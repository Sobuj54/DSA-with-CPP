#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"sobuj", 100});
    mp.insert({"rasel", 10});
    mp.insert({"rakib", 15});
    mp.insert({"rony", 5});

    // another way of inserting
    mp["bat man"] = 99;
    mp["john wick"] = 69;

    // one way to see all the key values
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if (mp.count("sobuj")) // checking if sobuj exists or not
    {
        cout << mp["sobuj"] << endl;
    }
    else
        cout << "nai" << endl;
    return 0;
}