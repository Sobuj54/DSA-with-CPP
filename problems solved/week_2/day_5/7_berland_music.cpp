#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n), q(n);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        cin >> s;

        vector<int> liked, disliked;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                liked.push_back(i);
            }
            else
            {
                disliked.push_back(i);
            }
        }

        vector<pair<int, int>> liked_ratings, disliked_ratings;
        for (int i : liked)
        {
            liked_ratings.push_back({p[i], i});
        }
        for (int i : disliked)
        {
            disliked_ratings.push_back({p[i], i});
        }

        sort(liked_ratings.begin(), liked_ratings.end());
        sort(disliked_ratings.begin(), disliked_ratings.end());

        vector<int> result(n);
        int current_value = 1;

        for (int i = 0; i < disliked_ratings.size(); i++)
        {
            result[disliked_ratings[i].second] = current_value++;
        }

        for (int i = 0; i < liked_ratings.size(); i++)
        {
            result[liked_ratings[i].second] = current_value++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
