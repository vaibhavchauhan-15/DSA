//PAIR SUM OF ONE ARRAY
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6};
   // vector<int>brr{1,5,4,7,8,2,3};
    vector<int>ans;
   //pairs
   cout<<"here the pairs are:";
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
          cout<<"("<<element<<","<<arr[j]<<")"<<endl;
          //sum of pairs
           if(element+arr[j]==9){
            cout<<"sum pairs";
              cout<<"("<<element<<","<<arr[j]<<")"<<endl;
           }
        }
    }
return 0;
}






//USER DEFINE PAIR SUM OF ONE ARRAY
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size,sum;
    cout<<"enter the size of array :";
    cin>>size;
    cout<<"enter the element of array :";
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
      cin>>arr[i];
    }
    cout<<"enter the sum value of array :";
    cin>>sum;
   //pairs
   cout<<"here the pairs are:";
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
          cout<<"("<<element<<","<<arr[j]<<")"<<endl;
          //sum of pairs
           if(element+arr[j]==sum){
            cout<<"sum pairs";
              cout<<"("<<element<<","<<arr[j]<<")"<<endl;
           }
        }
    }
return 0;
}