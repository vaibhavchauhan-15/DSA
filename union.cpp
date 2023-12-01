// UNION OF ARRAY


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the size of first array :";
    cin>>a;
    int arr[a];
    //taking input
    cout<<"Enter the element of array :";
    for(int i=0;i<a;i++){
       cin>>arr[i];
    }
    cout<<"enter the size of second array :";
    cin>>b;
    int brr[b];
    //taking input
    cout<<"Enter the element of array :";
    for(int i=0;i<b;i++){
       cin>>brr[i];
    }
    // union
    vector<int>ans;
    for(int i=0;i<a;i++){
       ans.push_back(arr[i]);
    }
    for(int i=0;i<b;i++){
       ans.push_back(brr[i]);
    }
    //print
    cout<<"Here the union :";
     for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
    }
    

return 0;
}
