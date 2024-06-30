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
    cin >> tt;
    while (tt--)
    {
        int q;
        cin >> q;
        vector<int> x(q);
        for (int i = 0; i < q; i++) cin >> x[i];
        int j = 0;
        bool flag = 0;
        cout << 1;
        for (int i = 1; i < q; i++)
        {
            if (x[i] >= x[j] && !flag)
            {
                j = i;
                cout << 1;
            }
            else if (x[i] < x[j] && x[i] <= x[0] && !flag)
            {
                flag = 1;
                j = i;
                cout << 1;
            }
            else if (x[i] >= x[j] && x[i] <= x[0] && flag)
            {
                j = i;
                cout << 1;
            }
            else cout << 0;
        }
        cout << nl;
    }
    return 0;
}
