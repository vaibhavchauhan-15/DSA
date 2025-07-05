#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Modular exponentiation function (a^b % mod)
ll modPow(ll a, ll b, ll mod){
    ll ans = 1;
    a = a % mod; // Reduce a initially
    
    while(b > 0){
        if(b & 1){ // If b is odd
            ans = (ans * a) % mod; // Multiply ans by a and take modulo
        }
        a = (a * a) % mod; // Square a and take modulo
        b = b >> 1; // Divide b by 2
    }
    return ans;
}

int main(){
    ll a, b, mod;
    cout << "Enter base (a), exponent (b), and modulo: ";
    cin >> a >> b >> mod;
    cout << "Result of " << a << "^" << b << " % " << mod << " is: " << modPow(a, b, mod) << endl;
    return 0;
}