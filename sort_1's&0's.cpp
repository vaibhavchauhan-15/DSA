#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>arr{1,0,1,0,0,1,0,1,0};
   int start=0;
   int i=0;
   int end=arr.size()-1;
  while (i<end){
    if(arr[i]==0){
        swap(arr[i],arr[start]);
        start++;
        i++;
    }
    if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
    }

   }
   for(int value:arr){
    cout<<value<<" ";
   }
    return 0;
}
