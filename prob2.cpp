// https: // leetcode.com/problems/peak-index-in-a-mountain-array/description/
// my code
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int temp = -1;
    int ind = -1;
    for (int i = 0; i < n;i++)
    {
        if(v[i]>temp)
        {
            temp = v[i];
            ind = i;
        }
    }
    cout << ind << nl;
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}