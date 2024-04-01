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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

void print(vector<pair<int,int>>&v)
{
    for(int i = 0; i < v.size(); i++) cout << v[i].second << " ";
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
        cin >> n;
        // priority_queue<pair<int,int>,vector<pair<int,int>>, cmp> pq, pq1, pq2;
        vector<pair<int, int>> pq, pq1, pq2;
        pair<int, int> p[3], p1[3], p2[3];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.pb(make_pair(i, x));
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq1.pb(make_pair(i, x));
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq2.pb(make_pair(i, x));
        }
        sort(all(pq),cmp);
        sort(all(pq1), cmp);
        sort(all(pq2), cmp);
        // print(pq);
        // print(pq1);
        // print(pq2);
        int mx = Min;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (pq[i].first != pq1[j].first && pq[i].first != pq2[k].first && pq1[j].first != pq2[k].first)
                    {
                        mx = max(pq[i].second + pq1[j].second + pq2[k].second, mx);
                    }
                }
            }
        }
        cout << mx << nl;
    }
    return 0;
}
