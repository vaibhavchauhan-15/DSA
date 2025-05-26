#include<bits/stdc++.h>
using namespace std;
void simpleSieve(int limit, vector<int> &prime) {
    vector<bool> mark(limit + 1, true);
    mark[0] = mark[1] = false;

    for (int i = 2; i <= limit; i++) {
        if (mark[i]) {
            prime.push_back(i);
            for (int j = i * i; j <= limit; j += i)
                mark[j] = false;
        }
    }
}

void segmentedSieve(long long L, long long R) {
    vector<int> prime;
    simpleSieve(sqrt(R), prime);

    int n = R - L + 1;
    vector<bool> isPrime(n, true);

    for (int p : prime) {
        long long start = max(1LL * p * p, (L + p - 1) / p * p);
        for (long long j = start; j <= R; j += p)
            isPrime[j - L] = false;
    }

    for (int i = 0; i < n; i++) {
        if (isPrime[i] && (L + i) != 1)
            cout << (L + i) << " ";
    }
}

int main(){
    cout << "Enter start and end point to Print prime number :";
    int L ,R;cin>>L>>R;
    segmentedSieve(L,R);
    return 0;
}

