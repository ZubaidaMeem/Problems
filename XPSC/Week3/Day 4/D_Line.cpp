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
vector<int> adj(N);
bool vis[N];

void print(vector<int>&v)
{
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << nl;
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
        string s;
        cin >> n >> s;
        vector<int>v(n), v1(n), dif(n), pre(n);
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                v[i] = i;
                v1[i] = n - 1 - i;
            }
            else
            {
                v[i] = n - 1 - i;
                v1[i] = i;
            }
            if(v1[i] - v[i] > 0) dif[i] = v1[i] - v[i];
            sum += v[i];
        }
        sort(all(dif), greater<int>());
        for(int i = 0; i < n; i++)
        {
            sum += dif[i];
            cout << sum << " ";
        }
        cout << nl;
    }
    return 0;
}
