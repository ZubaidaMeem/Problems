#include <bits/stdc++.h>
#define ll long long
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
ll Inf = 1e18;

using namespace std;

const int N = 10005;
vector<int> adj[N];
bool vis[N];

vector<ll> printFirstNegativeInteger(ll int A[], ll int N, ll int K)
{
    int i = 0, j = 0;
    vector<ll> v;
    queue<ll> q;
    while (i < N)
    {
        if (A[i] < 0) q.push(A[i]);
        if (i - j + 1 < K)  i++;
        else if (i - j + 1 == K)
        {
            if (q.size() == 0) v.push_back(0);
            else v.push_back(q.front());
            if (A[j] < 0) q.pop();
            i++;
            j++;
        }
    }
    return v;
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
    }
    return 0;
}
