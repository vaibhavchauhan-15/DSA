#include<bits/stdc++.h>
using namespace std;

int maxSquare(int n , int m , int k){
    int maxAlice = 0;

    //edge case
    if(k == 0) return n * m;

    //vertical cut
    for (int i = 1; i < m; i++) {
        int p1 = n * i;
        int p2 = n * (m - i);
        if(p1 >= k){
            maxAlice = max(p2, maxAlice);
        }
        if(p2 >= k){
            maxAlice = max(p1, maxAlice);
        }
    }
    
    //horizomtal cut
    for (int j = 1; j < n; j++) {
        int p1 = j * m;
        int p2 = (n - j) * m;
        if(p1 >= k){
            maxAlice = max(p2, maxAlice);
        }
        if(p2 >= k){
            maxAlice = max(p1, maxAlice);
        }
    }

    return maxAlice;
}

int main(){
    int t;
    cin >> t;
    while (t--) {   
        int n, m, k;
        cin >> n >> m >> k;
        cout << maxSquare(n, m, k) << endl;
    }
    return 0;
}
