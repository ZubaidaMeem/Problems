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
        string s;
        cin >> s;
        int b = 0, B = 0;
        string s1 = "";
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == 'b') b++;
            else if(s[i] == 'B') B++;
            else if(s[i] >= 'a' && s[i] <= 'z' && b > 0) b--;
            else if(s[i] >= 'A' && s[i] <= 'Z' && B > 0) B--;
            else s1.pb(s[i]);
        }
        reverse(all(s1));
        cout << s1 << nl;
    }
    return 0;
}
