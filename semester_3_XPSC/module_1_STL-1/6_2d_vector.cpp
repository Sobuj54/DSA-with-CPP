#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // first way of creating 2d vector
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 2)); // 2d vector is initialized with 2

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    // second way of creating 2d vector with dynamic size
    int x;
    cin >> x;
    vector<vector<int>> vec;

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        vector<int> temp;
        for (int j = 0; j < y; j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        vec.push_back(temp);
    }

    for (int i = 0; i < x; i++)
    {
        // for (int j = 0; j < vec[i].size(); j++)
        // {
        //     cout << vec[i][j] << " ";
        // }
        // another way
        for (int val : vec[i])
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    // vector of strings
    int s;
    cin >> s;
    vector<string> str;
    for (int i = 0; i < s; i++)
    {
        string S;
        cin >> S;
        str.push_back(S);
    }

    for (int i = 0; i < s; i++)
    {
        // prints each character
        for (int j = 0; j < str[i].size(); j++)
        {
            cout << str[i][j] << " ";
        }
        // cout <<str[i]<< "\n"; prints each string in vector
        cout << "\n";
    }
    return 0;
}