//BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int target){
int start=0;
int end=size -1;
int mid = start + (end - start) /2;
while(start<=end){
   int element =arr[mid];
   
   if(element == target){
      return mid ;
   }
   else if(target < element){
      //go left
      end = mid - 1;
   }
   else {
      //go right
      start = mid + 1;

   }
   mid= start + (end - start) /2;

}
//element not found 
return -1;
}
int main(){
   int size;
   int target;
   int arr[100];
   cout<<"Enter the size:";
   cin>>size;
   cout<<"Enter the element:";
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   cout<<"Enter the value which you want to found:";
   cin>>target;
   // int arr[]={1,3,4,6,8,9,10,14,16,18,19,20};
   // int size=sizeof(arr)/sizeof(int);
   // int target =1;
   int indexOftarget = binarysearch(arr,size,target);
   if(indexOftarget== -1){
      cout<<target<<" not found"<<endl;
   }
   else{
      cout<<target<<" found at "<<indexOftarget<<" index"<<endl;
   }

}

//  //pre deine function for binary search
// #include <vector>
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
// vector<int> v{2,3,5,6,7,8};
// if(binary_search(v.begin(),v.end(),6)){
//     cout<<"found!";
// }
// else{
//     cout<<"Not found!";
// }
//   return 0;
// }


// //pre deine function for array
// #include <vector>
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
// int arr [ ] = {2,3,5,6,7,8};
// int size = 6;
// if(binary_search(arr,arr + size ,8)){
//     cout<<"found!";
// }
// else{
//     cout<<"Not found!";
// }
//   return 0;
// }

// //find occrance using binary search

// #include<iostream>

// using namespace std;

// int findIndex(int arr[],int size, int target){
//    int start = 0;
//    int end = size-1;
//    int index=-1;
//    while(start<=end){
//       int mid = start + (end - start)/2;

//       if(arr[mid] == target ){
//         index = mid;
//         end=mid -1;
//       }
//        else if(target < arr[mid]){
//          end=mid -1;  
//       }
//       else{
//         start = mid +1;
//       }
//       mid = start + (end - start )/2;
      
//    }
//  return index;
// }

// int main(){
// int arr[]={1,2,4,4,4,4,4,5,8,9,11,15};
// int size = sizeof(arr)/4;
// int target = 15;
// int index = findIndex(arr,size,target); 
// if(index != -1){
//     cout<<"first occurance found at index :"<<index;
// }else
// cout<<"not found ";
// }



// //PIVOT ELEMENT
// #include<iostream>
// #include<vector>
// using namespace std;

// int findpivot(vector<int> p){
//     int s =0;
//     int e=p.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(p[mid] > p[mid+1]){
//             return p[mid];
//         }else if(p[mid-1] > p[mid]){
//             return p[mid -1];
//         }else if(p[s] > p[mid]){
//             e=mid - 1;
//         }else{
//             s = mid + 1;
//         }
//         mid=s+(e-s)/2;
//     }
// }
// int main(){
//     vector<int> p {1,2,3,4,5,6,7,8,1,2};
//     cout<<"found :"<<findpivot(p);
// }
