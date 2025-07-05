//69 sqrt(x)
#include<bits/stdc++.h>
using namespace std;
int sqrt(int x){
    int s=0;
    int e=x-1;
    int ans=-1;
    if(x==0) return 0;
    if(x==1) return 1;
    while(s<=e){
        int mid=s+(e-s)/2;
        //base case
        if(mid*mid==x){
            return mid;
        }
        if(mid*mid<x){
            //store ans
            //go right
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int x=2;
    cout<<"Square root is:"<<sqrt(x);
    return 0;
}