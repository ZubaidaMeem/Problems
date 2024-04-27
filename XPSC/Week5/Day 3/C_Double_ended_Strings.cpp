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
    cin >> tt;
    while (tt--)
    {
        string s, s1;
        cin >> s >> s1;
        int cnt = 0;
        int i = 0, mx = 0;
        vector<string>v;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 1; j < s.size() + 1; j++)
            {
                string x = s.substr(i, j);
                if(s1.find(x) != -1 && x.size() > mx) mx = x.size();
            }
        }
        cout << s.size() + s1.size() - 2 * mx << nl;
    }
    return 0;
}
