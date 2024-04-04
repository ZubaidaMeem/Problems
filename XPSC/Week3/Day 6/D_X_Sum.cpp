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

void print(vector<vector<int>>& v)
{
    for(int i = 0; i < v.size(); i++) {for(int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
    cout << nl;}
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>>v(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++) cin >> v[i][j];
        }
        //print(v);
        int mx = Min;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int sum = v[i][j];
                int x = i, y = j;
                while(x >= 0 &&  x < n && y >= 0 && y < m )
                {
                    if(!(x == i && y == j)) sum += v[x][y];
                    x++;
                    y++;
                }
                x = i, y = j;
                while(x >= 0 &&  x < n && y >= 0 && y < m )
                {
                    if(!(x == i && y == j)) sum += v[x][y];
                    x++;
                    y--;
                }
                x = i, y = j;
                while(x >= 0 &&  x < n && y >= 0 && y < m )
                {
                    if(!(x == i && y == j)) sum += v[x][y];
                    x--;
                    y++;
                }
                x = i, y = j;
                while(x >= 0 &&  x < n && y >= 0 && y < m )
                {
                    if(!(x == i && y == j)) sum += v[x][y];
                    x--;
                    y--;
                }
                //cout << sum << " ";
                mx = max(mx, sum);
            }
        }
        cout << mx << nl;
    }
    return 0;
}
