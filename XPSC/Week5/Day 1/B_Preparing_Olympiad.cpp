#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define bp(x) __builtin_popcount(x)
#define cy cout << "YES\n"
#define yes cout << "Yes\n"
#define cn cout << "NO\n"
#define no cout << "No\n"
#define nl "\n"
#define sp " "
#define all(x) x.begin(), x.end()
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)

int cs = 1;
#define Case cout << "Case " << cs++ << ": "

using namespace std;

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;
const int N = 10005;
vector<int> adj[N];
bool vis[N];

template<class T> void print(vector<T>&v) { for (T i : v) cout << i << " "; cout << nl; }
template<class T> void _print(vector<T>&v) { for (T i : v) cout << i.first << " " << i.second << nl; }
template<class T> void print(set<T>&s) { for (T i : s) cout << i << " "; cout << nl; }
template<class T, class V> void _print(map <T, V> &mp) { for (auto i : mp) cout << i.first << " " << i.second << nl; }
template<class T, class V> void _print(pair <T, V> p) { for (auto i : p) cout << i.first << " " << i.second << nl; }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--)
    {
        int n, l, r, x;
        cin >> n >> l >> r >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int res = 0;
        for (int i = 0; i < (1 << n); i++)
        {
            int cnt = 0, mn = Max, mx = 1, cnt1 = 0, nb = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    cnt1++;
                    cnt += v[j];
                    mn = min(mn, v[j]);
                    mx = max(mx, v[j]);
                }
            }
            if (cnt >= l && cnt <= r && cnt1 >= 2 && mx - mn >= x) res++;
        }
        cout << res;
    }
    return 0;
}
