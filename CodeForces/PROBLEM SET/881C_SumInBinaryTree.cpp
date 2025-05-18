#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int SumTreeNode()
{
    ll num;
    cin >> num;
    ll sum = 0;
    while (num > 0)
    {
        sum += num;
        num /= 2;
    }
    cout << sum <<"\n";
    return 0;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        SumTreeNode();
    }

    return 0;
}