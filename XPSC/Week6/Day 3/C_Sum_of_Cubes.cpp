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
const int N = 1e4 + 9;
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
    vector<int>pw;
    for(int i = 1; i <= N; i++) pw.pb(pow(i, 3));
    // print(pw);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;
        bool flag = 0;
        for(int i = 0; i < N; i++)
        {
            if(pw[i] >= x) break;
            int l = 0, r = N - 1, mid, need = x - pw[i] ;
            bool ok = 0;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if(pw[mid] == need) { ok = 1; break; }
                else if(pw[mid] > need) r = mid - 1;
                else l = mid + 1;
            }
            if(ok){ flag = 1;break; }
        }
        if(flag) cy;
        else cn;
    }
    return 0;
}
