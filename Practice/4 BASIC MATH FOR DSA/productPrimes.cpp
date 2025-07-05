#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

// Simple Sieve to find primes up to sqrt(R)
vector<bool> simpleSieve(long long n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

long long primeProduct(long long L, long long R) {
    vector<bool> basePrimes = simpleSieve(sqrt(R));
    vector<long long> primes;
    for (long long i = 2; i < basePrimes.size(); i++) {
        if (basePrimes[i]) {
            primes.push_back(i);
        }
    }

    vector<bool> isSegmentPrime(R - L + 1, true);
    if (L == 1) isSegmentPrime[0] = false;

    for (long long prime : primes) {
        long long start = max(prime * prime, ((L + prime - 1) / prime) * prime);
        for (long long j = start; j <= R; j += prime) {
            isSegmentPrime[j - L] = false;
        }
    }

    long long product = 1;
    for (long long i = 0; i <= R - L; i++) {
        if (isSegmentPrime[i]) {
            product = (product * (L + i)) % MOD;
        }
    }

    return product;
}
int main() {
    long long L, R;
    cin>>L>>R;
    cout << primeProduct(L, R) << endl; 

    return 0;
}
