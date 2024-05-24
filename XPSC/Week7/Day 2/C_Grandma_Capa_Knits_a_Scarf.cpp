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
        string s;
        cin >> s;
        int ans = Max;
        for (int i = 0; i < 26; i++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (s[l] == s[r]) l++, r--;
                else if (s[l] == char('a' + i)) cnt++, l++;
                else if (s[r] == char('a' + i)) cnt++, r--;
                else
                {
                    cnt = -1;
                    break;
                }
            }
            if (cnt != -1) ans = min(ans, cnt);
        }
        if (ans == Max) ans = -1;
        cout << ans << nl;
    }
    return 0;
}
