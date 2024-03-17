#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define bp(x) __builtin_popcount(x)
#define cy cout << "YES\n"
#define yes cout << "Yes\n"
#define cn cout << "NO\n"
#define no cout << "No\n"
#define nl cout << "\n"
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
        int n;
        cin >> n;
        string a[n], b[n], c[n];
        int s1 = 0, s2 = 0, s3 = 0;
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            m[b[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            m[c[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == 1) s1 += 3;
            else if (m[a[i]] == 2) s1 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[b[i]] == 1) s2 += 3;
            else if (m[b[i]] == 2) s2 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[c[i]] == 1) s3 += 3;
            else if (m[c[i]] == 2) s3 += 1;
        }
        cout << s1 << " " << s2 << " " << s3 << "\n";
    }
    return 0;
}
