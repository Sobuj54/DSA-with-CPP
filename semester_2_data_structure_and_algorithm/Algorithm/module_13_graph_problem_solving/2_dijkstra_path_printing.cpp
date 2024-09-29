// https://codeforces.com/problemset/problem/20/C

#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define pr pair<ll, ll>
using namespace std;

vector<pr> adj[100005];
ll par[100005];
ll dis[1000005];

class cmp
{
public:
    bool operator()(pr a, pr b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pr, vector<pr>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pr parent = pq.top();
        pq.pop();
        ll parentNode = parent.first;
        ll parentCost = parent.second;
        for (pr child : adj[parentNode])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                par[childNode] = parentNode;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj[a].pb({b, w});
        adj[b].pb({a, w});
    }

    memset(par, -1, sizeof(par));
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }

    dijkstra(1);
    if (dis[n] == 1e18)
        cout << "-1" << endl;
    else
    {
        vector<int> v;
        ll x = n;
        while (x != -1)
        {
            v.pb(x);
            x = par[x];
        }
        reverse(v.begin(), v.end());
        for (int x : v)
        {
            cout << x << " ";
        }
    }

    return 0;
}