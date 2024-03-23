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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int a[26] = {0};
        for(int i = 0; i < n; i++) a[s[i] - 'a']++;
        int even = 0, odd = 0;
        for(int i = 0; i < 26; i++)
        {
            even += a[i] - (a[i] % 2);
            odd += (a[i] % 2);
        }
        //cout << odd << " " << even << nl;
        if(k >= odd - 1)  cy;
        else cn;
    }
    return 0;
}
