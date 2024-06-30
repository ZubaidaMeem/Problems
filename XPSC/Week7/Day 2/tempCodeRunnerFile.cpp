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
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
#define vsum(v) accumulate(v.begin(), v.end(), 0)
#define all(x) x.begin(), x.end()
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
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
        int n;
        cin >> n;
        vector<int> v(n), v1;
        map<int, int> mp, mp1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (auto it : mp)
        {
            int x = it.first;
            int y = it.second;
            if (x <= n)
            {
                for (int i = 1; i < y; i++) v1.push_back(x);
                mp1[x] = 1;
            }
            else
            {
                for (int i = 1; i <= y; i++) v1.push_back(x);
            }
        }
        int cnt = 1, ans = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (mp1[j] == 1) cnt++;
                else break;
            }
            int x = (v1[i] - 1) / 2;
            if (cnt <= x) cnt++, ans++;
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
