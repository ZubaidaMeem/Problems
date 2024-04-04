#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define bp(x) __builtin_popcount(x)
#define cy cout << "YES\n"
#define yes cout << "Yes\n"
#define cn cout << "NO\n"
#define no cout << "No\n"
#define nl "\n"
#define all(x) x.begin(), x.end()
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)

int cs = 1;
#define Case cout << "Case " << cs++ << ": "

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;

using namespace std;

const int N = 2 * 10000 + 5;
vector<int> adj[N];
vector<int> cnt(N);
bool vis[N];

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << nl;
}

void dfs(int node, int src)
{
    if (adj[node].size() == 1 && node != 1) cnt[node] = 1;
    for (int child : adj[node])
    {
        if (child != src)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++)
        {
            cnt[i] = 0;
            adj[i].clear();
        }
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << nl;
        }
    }
    return 0;
}
