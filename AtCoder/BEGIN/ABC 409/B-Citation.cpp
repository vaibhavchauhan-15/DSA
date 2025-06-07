#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;cin>>n;

    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i]; 
    }


    int maxNum=0;
    for (int x = 0; x <= n; x++) {
        int count=0;
        for (int i = 0; i < n; i++) {
            
            if(x<=arr[i]){
                count++;
            } 
            if(count>=x){
                maxNum=x;
                
            } 
        }
    }
    cout <<maxNum <<endl;
    return 0;
}