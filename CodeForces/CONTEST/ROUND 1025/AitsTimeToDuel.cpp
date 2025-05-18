#include<bits/stdc++.h>
using namespace std;

bool isAnyLier(vector<int>arr){
    int sum=0;
    int n=arr.size();
    int ones=0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i]==1) ones++;
        if (i < n-1 && arr[i] == 0 && arr[i+1] == 0) {
            return true; 
        }
    }
    //base case
    if (sum > n-1) return true;
    if (ones == 0) return true;
    
    return false; // no liar detected
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];      
        }        bool flag =isAnyLier(arr);
        if(flag == true){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}