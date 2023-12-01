// FIND UNIQUE NUMBER 

#include<iostream>
#include<vector>
using namespace std;
//create function
int findunique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
       ans = ans ^ arr[i];
    }
 return ans;
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    vector<int>arr(n);
    //taking input
    cout<<"Enter the element of array :";
    for(int i=0;i<arr.size();i++){
       cin>>arr[i];
    }
    int unique=findunique(arr);
    //print
    if(unique == 0 ){
        cout<<"NO unique number found "<<endl;
    }
    else {
           cout<<"This is the unique element :"<<unique<<endl;
    }
  
    
return 0;
}