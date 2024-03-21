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
#define lower(x) trxform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) trxform(x.begin(), x.end(), x.begin(), ::toupper)

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
    int search(string pat, string txt)
    {
        // code here
        int i = 0, j = 0 , x = 0;
        map<char, int> mp;
        for (auto i : pat) mp[i]++;
        int cnt = mp.size();
        int k = pat.size();
        while (j < txt.size())
        {
            if (mp.find(txt[j]) != mp.end())
            {
                mp[txt[j]]--;
                if (mp[txt[j]] == 0) cnt--;
            }
            if (j - i + 1 == k)
            {
                if (cnt == 0) x++;
                if (mp.find(txt[i]) != mp.end())
                {
                    mp[txt[i]]++;
                    if (mp[txt[i]] == 1) cnt++;
                }
                i++;
            }
            j++;
        }
        return x;
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
