#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define bp(v) __builtin_popcount(v)
#define cy cout << "YES\n"
#define yes cout << "Yes\n"
#define cn cout << "NO\n"
#define no cout << "No\n"
#define nl "\n"
#define sp " "
#define sz(x) (int)x.size()
#define maxe(x) *max_element(x.begin(), x.end())
#define mine(x) *min_element(x.begin(), x.end())
#define vsum(x) accumulate(x.begin(), x.end(), 0)
#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.begin(), x.end(), greater<int>())
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

template <class T>void print(vector<T> &v){for (T i : v) cout << i << sp ;cout << nl;}
template <class T>void print2d(vector<T> &v){for (T i : v){for (auto j : i) cout << i[j] << sp;cout << nl;}}
template<class T> void _print(vector<T>&v) { for (T i : v) cout << i.first << sp << i.second << nl; }
template<class T> void print(set<T>&s) { for (T i : s) cout << i << sp ; cout << nl; }
template<class T, class V> void _print(map <T, V> &mp) { for (auto i : mp) cout << i.first << sp << i.second << nl; }
template<class T, class V> void _print(unordered_map<T, V> &mp) { for (auto i : mp) cout << i.first << sp << i.second << nl; }
template<class T, class V> void _print(pair <T, V> p) { for (auto i : p) cout << i.first << sp << i.second << nl; }


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, a = 1, b = 0;
        cin >> n;
        int cnt = 0;
        while (a * 2 <= n) a *= 2, cnt++;
        for (int i = cnt - 1; i >= 0; i--)
        {
            if ((n & (1 << i))) b |= (1 << i);
        }
        cout << b << sp << a << nl;
    }
    return 0;
}
