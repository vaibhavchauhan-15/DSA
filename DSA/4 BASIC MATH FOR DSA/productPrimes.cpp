#include <bits/stdc++.h>
using namespace std;

vector<bool> seive(long long n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    long long m = sqrt(n);
    for (long long i = 2; i <= m; i++) {
        if (prime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    return prime;
}

long long primeProduct(long long L, long long R) {
    vector<bool> segPrime = seive(sqrt(R));
    vector<long long> basePrime;
    for (long long i = 0; i < segPrime.size(); i++) {
        if (segPrime[i]) {
            basePrime.push_back(i);
        }
    }

    vector<bool> seggSeive(R - L + 1, true);
    if (L <= 1) {
        for (long long i = L; i <= min(R, 1LL); i++) {
            seggSeive[i - L] = false;
        }
    }

    for (auto prime : basePrime) {
        long long first_mul = (L / prime) * prime;
        if (first_mul < L) {
            first_mul += prime;
        }
        long long j = max(prime * prime, first_mul);
        while (j <= R) {
            seggSeive[j - L] = false;
            j += prime;
        }
    }

    long long product = 1;
    bool found = false;
    for (long long i = 0; i < seggSeive.size(); i++) {
        if (seggSeive[i]) {
            found = true;
            product = product * (i + L);
            // cout << i + L << " ";
        }
    }
    if (!found) cout << "1";
    return product;
}

int main() {
    cout << "Enter First number  : ";
    long long L; cin >> L;
    cout << "Enter Last number  : ";
    long long R; cin >> R;
    long long ans = primeProduct(L, R);
    cout << endl << "Total product is : " << ans << endl;
    return 0;
}
