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

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;

using namespace std;

const int N = 10005;
vector<int> adj[N];
bool vis[N];

template<class T> void print(vector<T>&v) { for (T i : v) cout << i << " "; cout << nl; }
template<class T> void _print(vector<T>&v) { for (T i : v) cout << i.first << " " << i.second << nl; }
template<class T> void print(set<T>&s) { for (T i : s) cout << i << " "; cout << nl; }
template<class T, class V> void _print(map <T, V> &mp) { for (auto i : mp) cout << i.first << " " << i.second << nl; }
template<class T, class V> void _print(pair <T, V> p) { for (auto i : p) cout << i.first << " " << i.second << nl; }

bool isPalindrome(int x)
{
    int tmp = x;
    int rev = 0;
    while (tmp)
    {
        int d = tmp % 10;
        rev = rev * 10 + d;
        tmp /= 10;
    }
    if(x == rev) return true;
    return false;
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
        vector<int>v(n);
        int cnt = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        int a = 2;
        int  b = 15;
        int res = 1;
        while (b > 0)
        {
            if (b & 1) res = res * a ;
            a *= a ;
            b >>= 1;
        }
        unordered_map<int,int>mp, pal;
        for(int i = 0; i < res; i++) if(isPalindrome(i)) pal[i]++;
        for(int i = 0;i < n; i++)
        {
            int x = v[i];
            mp[x]++;
            for(auto i :pal)
            {
                int y = i.first;
                int xy = y ^ x;
                cnt += mp[xy];
            }
        }
        cout << cnt << nl;
    }
    return 0;
}
