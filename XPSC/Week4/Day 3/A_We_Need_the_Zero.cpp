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

const int N = 10005;
vector<int> adj[N];
bool vis[N];

template <class T> void print(vector<T> &v)
{
    for (T i : v) cout << i << " ";
    cout << nl;
}

template <class T> void _print(vector<T> &v)
{
    for (T i : v) cout << i.first << " " << i.second << nl;
}

template <class T>
void print(set<T> &XOR)
{
    for (T i : XOR) cout << i << " ";
    cout << nl;
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
        int n, XOR = 0, x = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];
        }
        for (int i = 0; i < n; i++) v[i] ^= XOR;
        for (int i = 0; i < n; i++) x ^= v[i];
        if (x == 0) cout << XOR << nl;
        else cout << -1 << nl;
    }
    return 0;
}
