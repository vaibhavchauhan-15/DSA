#include<bits/stdc++.h>
using namespace std;
int minNumOfGoldCoins(int ratings[]){
    int sum=0;
    int minRating=INT_MAX;
    for (int i = 0; i <5; i++) {
        sum+=ratings[i];
        if(ratings[i]<minRating){
            minRating=ratings[i];
        }
    }  
    int avg=sum/5;
    if(avg==0){
        return 400;
    } 
}
int main(){
    int t;cin>>t;
    while(t--){
        int ratings[5];
        for (int i = 0; i <5; i++) {
            cin>>ratings[i];
        }
        int result = minNumOfGoldCoins(ratings);
    }
    return 0;
}