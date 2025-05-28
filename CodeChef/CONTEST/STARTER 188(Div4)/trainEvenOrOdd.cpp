#include<bits/stdc++.h>
using namespace std;

int maxTime(int arr[],int n){
    vector<int>oddTime;
    vector<int>evenTime;
    evenTime.push_back(arr[0]);
    for (int i =1; i < n; i++) {
        if(i%2==0){
            evenTime.push_back(arr[i]);
        }else{
            oddTime.push_back(arr[i]);
        }
    }

    int evenSum=0;
    for (int i = 0; i < evenTime.size(); i++) {
        evenSum+=evenTime[i]; 
    }
    
    int oddSum=0;
    for (int i = 0; i < oddTime.size(); i++) {
        oddSum+=oddTime[i];      
    }
    // cout<<evenSum << " " <<oddSum<<endl;
    return max(evenSum , oddSum);
}

int main(){
    int t;cin>>t;
    while (t--)
    {   
        int n;cin>>n;
        int  arr[n];
        for (int i = 0; i < n; i++) {
                cin>>arr[i];
            }
            cout << maxTime(arr,n) <<endl;
        
        }
    
    return 0;
}