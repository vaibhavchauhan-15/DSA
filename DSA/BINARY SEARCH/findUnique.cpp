#include<bits/stdc++.h>
using namespace std;

int findUniqueElement(vector<int>& arr){
    int ans;
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end - start )/2;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                //go left
                start=mid+1;
            }else{
                ans=mid;
                end=mid;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,2,5,5,7,7,8,1,1,10,10,3,3};
    int ans=findUniqueElement(arr);
    if(ans!=0){
        cout << "Unique Element found at Index :"<<ans <<endl;
    }else cout << "Not Found" <<endl;
    return 0;
}