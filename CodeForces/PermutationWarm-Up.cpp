#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vii vector<long long>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define _gcd(a, b) __gcd(a, b)
#define MOD 998244353

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = n; i >= 1; --i){
        v.push_back(i);
    }

    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += (abs(v[i] - (i + 1)));
    }

    cout << (sum / 2) + 1 << endl;
}

int32_t main()
{
    /// CODE BY Masum
    optimize();
    //solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}