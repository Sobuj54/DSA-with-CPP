/*
key characteristics of map

    1. map stores key value pairs
    2. map stores key value pairs in ascending sorted manner
    3. map doesn't contain any duplicate values

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp.insert({10, 20}); // one way of inserting key value into map
    // another way or inserting key value pairs into map
    mp[5] = 50;
    mp[6] = 40;

    for (auto [key, value] : mp)
    {
        cout << key << " -> " << value << '\n';
    }

    // another way of printing key values of map
    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << "\n";
    }

    // finding a key value in map
    // auto it = mp.find(6); // will return an iterator of the matched key
    // if (it != mp.end())
    // {
    //     cout << it->first << " -> " << it->second << "\n";
    // }
    // else
    // {
    //     cout << "Not found" << "\n";
    // }

    // cout<<mp[6]<<"\n";  never use this way to find value in map

    // erasing a value from map
    // mp.erase(6); //this is one way of erasing key value

    // more preferable way of erasing key value from map
    auto ite = mp.find(6);
    if(ite != mp.end()){
        mp.erase(ite);
    }

    // auto it = mp.lower_bound(6); //returns iterator of a key greater or equal of 6
    // cout<<it->first <<" "<<it->second<<"\n";

    auto it = mp.upper_bound(6); //returns iterator of a key greater than 6
    cout<<it->first <<" "<<it->second<<"\n";
    return 0;
}