//TRIPLET SUM
#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>arr{1,2,3,4,5,6,7};
   int sum=9;
   for(int i=0;i<arr.size();i++){
      for(int j=i+1;j<arr.size();j++){
        for(int k=j+1;k<arr.size();k++){
        //printing pairs
          //cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
           if(arr[i]+arr[j]+arr[k]==sum){
             //printing pair sum
             cout<<"pairs found!"<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
          } 
        }
      }
   }
  
    return 0;
}