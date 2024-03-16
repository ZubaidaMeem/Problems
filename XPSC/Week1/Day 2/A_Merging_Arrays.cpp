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
    //cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<int>v(n), v1(m);
        for(int i =  0; i < n; i++) cin >> v[i];
        for(int i =  0; i < m; i++) cin >> v1[i];
        int i = 0, j = 0;
        while (i < n || j < m)
        {
            if(i < n && j < m)
            {
                if(v[i] < v1[j])
                {
                    cout << v[i] << " ";
                    i++;
                }
                else if(v[i] > v1[j])
                {
                    cout << v1[j] << " ";
                    j++;
                }
                else
                {
                    cout << v[i] << " " << v1[j] << " ";
                    i++; j++;
                }
            }
            else if(i < n)
            {
                cout << v[i] << " ";
                i++;
            }
            else if(j < m)
            {
                cout << v1[j] << " ";
                j++;
            }
        }

    }
    return 0;
}
