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

class Solution
{
    public:
    long maximumSumSubarray(int K, vector<int> &v, int n)
    {
        // code here
        long ans = 0, sum = 0;
        int l = 0, r = 0;
        while (r < n)
        {
            sum += v[r];
            if (r - l + 1 == K)
            {
                ans = max(ans, sum);
                sum -= v[l];
                l++;
                r++;
            }
            else r++;
        }
        return ans;
    }
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
