// #include<iostream>
// #include<vector>
// using namespace std;
// int findunique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];

//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the size :";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter the elements :";
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int unique = findunique(arr);
//     if(unique==false){
//         cout<<"No unique number found!"<<endl;
//     }else 
//     cout<<"here the unique number :"<<unique<<endl;

//     return 0;
// }


//union

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//    int arr[]={'a','2','3','4','5'};
//    int sizea=5;
//    int brr[]={'6','7','8','9'};
//    int sizeb=4;
//    vector<int>ans;
//    //insert of elements arr to ans
//    for(int i=0;i<sizea;i++){
//     ans.push_back(arr[i]);
//    }
//    //insert of elements brr to ans
//    for(int i=0;i<sizeb;i++){
//     ans.push_back(brr[i]);
//    }
//    //printing all elements
//    cout<<"here the union :";
//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }


//     return 0;
// }



//intersection


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//    vector<int>arr{1,2,3,4,5,6,7};
//    vector<int>brr{6,7,1 ,8,1,8,2,9};
//    vector<int>ans;
//    //outer loop of arr
//    for(int i=0;i<arr.size();i++){
//       //inner loop of brr
//       for(int j=0;j<brr.size();j++){
//         if(arr[i]==brr[j]){
//             //mark 
//             brr[j]=-1;
//             ans.push_back(arr[i]);
//         }
//       }
//    }
//    //printing
//    cout<<"intersection found :";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" "; 
   
//     }

//     return 0;
// }

//PAIR SUM

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//    vector<int>arr{1,2,3,4,5,6,7};
//    int sum=9;
//    for(int i=0;i<arr.size();i++){
//       for(int j=i+1;j<arr.size();j++){
//         //printing pairs
//          //cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//         if(arr[i]+arr[j]==sum){
//             //printing pair sum
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
           
//         }
//       }
//    }
  
//     return 0;
// }



// //TRIPLET SUM
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//    vector<int>arr{1,2,3,4,5,6,7};
//    int sum=9;
//    for(int i=0;i<arr.size();i++){
//       for(int j=i+1;j<arr.size();j++){
//         for(int k=j+1;k<arr.size();k++){
//         //printing pairs
//           //cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//            if(arr[i]+arr[j]+arr[k]==sum){
//              //printing pair sum
//              cout<<"pairs found!"<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//           } 
//         }
//       }
//    }
  
//     return 0;
// }

//sort 0's and 1's

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