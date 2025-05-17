#include<bits/stdc++.h>
using namespace std;

int getUnique(int arr[] , int n){
    int ans=0;
    for (int i = 0; i < n; i++) {
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1 ,2,9,8,6,8,1,2,6,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int finalAns=getUnique(arr , n);
    cout<<"Unique element is :"<<finalAns;
    return 0;
}