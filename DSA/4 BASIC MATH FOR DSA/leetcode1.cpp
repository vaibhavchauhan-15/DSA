// 204. Count Primes
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    if (n == 0) return 0;
    int ans = 0;
    // 0 ------ n-1 and marks as true
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;
            // start from 2 which is prime number and mark as false multiple of 2
            // then next 3 is also prime num and mark as false multiple of 3 and so on up to n-1
            // remaining true are prime number
            int j = 2 * i;
            while (j < n)
            {
                prime[j] = false;
                j = j + i;
            }
        }
    }
    return ans;
}
int main()
{
    cout << "Enter number :";
    int n;
    cin >> n;
    cout << "Total prime number is :" << countPrimes(n) << endl;
    return 0;
}