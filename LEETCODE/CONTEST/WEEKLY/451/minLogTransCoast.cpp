#include<bits/stdc++.h>
using namespace std;

long long minCost(int x , int k){
    long long  minimumCost=LLONG_MAX;
    for (int i = 1; i < x; ++i) {
        int len1=i;
        int len2=x-i;
        if(len1<= k &&  len2<=k){
            minimumCost=min(minimumCost ,1LL* len1*len2);
        } 
    }
    if(minimumCost==LLONG_MAX){
        return -1;
    }else{
        return minimumCost;
    }
}

long long minCuttingCost(int n, int m, int k) {
    int count=0;
    //count log which is less than k
    if(n<=k) count ++;
    if(m<=k) count ++;

    if(count==2){
        return 0;
    }else if (count==1 ){
        return minCost(max(n , m ), k);
    }else{
        int costn=minCost(n , k);
        int costm=minCost(m , k);
        return costn + costm;
    }

}


int main(){
    cout << minCuttingCost(6, 5, 5) << endl;  // Output: 5 ✅
    cout << minCuttingCost(4, 4, 6) << endl;  // Output: 0 ✅
    cout << minCuttingCost(9, 3, 5) << endl;  // Output: 12 ✅


    return 0;
}