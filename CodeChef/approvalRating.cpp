#include<bits/stdc++.h>
using namespace std;
int minNumOfGoldCoins(int ratings[]){
    // Create a copy to sort
    int sortedRatings[5];
    for (int i = 0; i < 5; i++) {
        sortedRatings[i] = ratings[i];
    }
    
    // Sort ratings to bribe judges with lowest ratings first
    sort(sortedRatings, sortedRatings + 5);
    
    // Calculate initial sum
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += sortedRatings[i];
    }
    
    // If already passing, no bribes needed
    if (sum >= 35) {
        return 0;
    }
    
    // Start bribing judges with lowest ratings until average reaches 7
    int bribesNeeded = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum - sortedRatings[i] + 10;
        bribesNeeded++;
        
        // Check if average is now at least 7
        if (sum >= 35) {
            break;
        }
    }
    
    return bribesNeeded * 100;
}

int main(){
    int t;cin>>t;
    while(t--){
        int ratings[5];
        for (int i = 0; i <5; i++) {
            cin>>ratings[i];
        }
        int result = minNumOfGoldCoins(ratings);
        cout<<result<<endl;
    }
    return 0;
}