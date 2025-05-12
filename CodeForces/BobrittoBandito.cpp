#include <iostream>
using namespace std;

int main()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, r, l;
        cin >> n >> m >> l >> r;
        int r1 = 0, l1 = 0;
        for (int i = 0; i <= r; i++)
        {
            if (m >= 1 && r1 + 1 <= r)
            {
                r1++;
                m--;
            }
        }
        for (int i = l; i <= 0; i++)
        {
            if (m >= 1)
            {
                l1--;
                m--;
            }
        }
        cout << l1 << " " << r1 << endl;
    }
    return 0;
}
