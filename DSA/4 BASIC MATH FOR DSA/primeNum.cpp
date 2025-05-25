#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number :";
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << n << " is not prime number" << endl;
        return 0;
    }

    bool flag = true;
    for (int i = 2; i*i < n; i++)
    {

        if (n % i == 0)
        {
            flag = false;
        }
        cout <<flag<<"=="<<n<<endl;
    }

    if (flag)
    {
        cout << n << " is Prime Number" << endl;
    }
    else
    {
        cout << n << " is not prime number" << endl;
    }
    return 0;
}