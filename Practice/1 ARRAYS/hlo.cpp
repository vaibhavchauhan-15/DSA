#include<iostream> 
using namespace std;

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
  
    
return 0;
}

#include<iostream>
using namespace std;
int main(){
    cout<<"enter any name which want to print :";
    string a;
    cin>>a;
cout<<a<<endl;
}


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<< ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
return 0;
}

//FIND UNIQ NUMBER 

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


//UNION OF ARRAY
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



//INTERSECTION OF ARRAY


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3};
    vector<int>brr{1,5};
    vector<int>ans;
    // intersection
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<brr.size();j++){
            if(element == brr[j] ){
                ans.push_back(element);
            }
        }
    }
    for(auto value :ans){
        cout<<value<<" ";
    }
return 0;
}


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

//PAIR SUM OF TWO ARRAY
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{1,5,4,7,8,2,3};
   //pairs
   cout<<"here the pairs are:"<<endl;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<brr.size();j++){
          cout<<"("<<element<<","<<brr[j]<<")"<<endl;
        }
    }
    //SUM PAIRS
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<brr.size();j++){
          //sum of pairs
           if(element+brr[j]==9){
            cout<<"sum pairs";
              cout<<"("<<element<<","<<brr[j]<<")"<<endl;
           }
        }
    }
return 0;
}






//USER DEFINE PAIR SUM OF TWO ARRAY
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int size1, size2, sum;

    // Taking input for the first array
    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter the elements of the first array: ";
    vector<int> arr(size1);
    for (int i = 0; i < size1; i++) {
        cin >> arr[i];
    }

    // Taking input for the second array
    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter the elements of the second array: ";
    vector<int> brr(size2);
    for (int i = 0; i < size2; i++) {
        cin >> brr[i];
    }

    // Taking input for sum
    cout << "Enter the sum value: ";
    cin >> sum;

    // Pairs
    cout << "Pairs are :" << endl;
    for (int i = 0; i < size1; i++) {
        int element = arr[i];
        for (int j = 0; j < size2; j++) {
            cout << "(" << element << "," << brr[j] << ")" << endl;
        }
    }

    // Printing sum pairs
    cout << "Sum pairs:" << endl;
    for (int i = 0; i < size1; i++) {
        int element = arr[i];
        for (int j = 0; j < size2; j++) {
            // Sum of pairs
            if (element + brr[j] == sum) {
                cout << "(" << element << "," << brr[j] << ")" << endl;
            }
        }
    }

    return 0;
}

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

sort 0's and 1's

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

2D ARRAY

#include<iostream>
#include<vector>
using namespace std;

int main(){
//declare
//int arr[3][3];
//initialize
int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
//printing
for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
       cout<<arr[i][j]<<" "; 
   } 
   cout<<endl;
}
int brr[2][2];
cout<<"enter the element :"<<endl;
//taking input in row wise 2
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cin>>brr[i][j]; 
   } 
}
//printing row wise
cout<<"you entered this :"<<endl;
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cout<<brr[i][j]<<" "; 
   } 
   cout<<endl;
}

    return 0;
}




//sum of 2d array 
#include<iostream>
#include<vector>
using namespace std;
int sum(int brr[2][2],int rows,int cols){
    cout<<"sum of array in row wise:"<<endl;
for(int i=0;i<2;i++){
    int sum=0;
   for(int j=0;j<2;j++){
       sum=sum + brr[i][j];
   } 
   cout<<sum<<endl;
}
}

int main(){
int brr[2][2];
int rows=2;
int cols=2;
cout<<"enter the element :"<<endl;
//taking input in row wise 2
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cin>>brr[i][j]; 
   } 
}
sum(brr, rows, cols);
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int sum(int brr[2][2],int rows,int cols){
    cout<<"sum of array in row wise:"<<endl;
for(int i=0;i<2;i++){
    int sum=0;
   for(int j=0;j<2;j++){
       sum=sum + brr[i][j];
   } 
   cout<<sum<<endl;
}
}


//MAXIMUM NUMBER 
#include<iostream>
#include<vector>
using namespace std;
int maxii(int brr[4][4],int rows,int cols){
   int maxi=0;
   for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    if(brr[i][j] > maxi){
       maxi= brr[i][j];
    }  
   } 

  }
 return maxi;
}
int main(){
int brr[4][4];
int rows=4;
int cols=4;
cout<<"enter the element :"<<endl;
//taking input in row wise 
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
       cin>>brr[i][j]; 
   } 
}
int result =maxii(brr,rows,cols);//Call the function
cout<<"maximum number is:"<<result;

}

//MINIMUM  NUMBER 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int mini(int brr[4][4],int rows,int cols){
   int min=INT_MAX;
   for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    if(brr[i][j] < min){
     min= brr[i][j];
    }  
   } 

  }
 return min;
}
int main(){
int brr[4][4];
int rows=4;
int cols=4;
cout<<"enter the element :"<<endl;
//taking input in row wise 
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
       cin>>brr[i][j]; 
   } 
}
int result =mini(brr,rows,cols);//Call the function
cout<<"minimum number is:"<<result;

}

//MINIMUM  NUMBER 
#include<iostream>
#include<vector>
using namespace std;
//create function
int transpose(int brr[4][4],int rows,int cols){
//printing collumn wise 
   for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cout<<brr[j][i]<<" "; 
      }
      cout<<endl;
   }

}
int main(){
int brr[4][4];
int rows=2;
int cols=2;
cout<<"enter the element :"<<endl;
//taking input in row wise 
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
       cin>>brr[i][j]; 
   } 
}
*/

//BINARY SEARCH

#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        int element=arr[mid];
        
        if(element==target){
            return mid;
        }
        else if(target<element){
            //go left
            end=mid-1;
        }
        else {
            //go right
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    //element not found 
    return -1;
}
int main(){
    int arr[]={1,3,4,6,8,9,10,14,16,18,19,20};
    int size=sizeof(arr)/sizeof(int);
    int target=1;
    int indexOftarget=binarysearch(arr,size,target);
    if(indexOftarget==-1){
        cout<<target<<" not found"<<endl;
    }
    else{
        cout<<target<<" found at "<<indexOftarget<<" index"<<endl;
    }
    return 0;
}

/*
cout<<"transpose is:"<<endl;
transpose(brr,rows,cols);

}

//pre deine function for binary search
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
vector<int> v{2,3,5,6,7,8};
if(binary_search(v.begin(),v.end(),6)){
    cout<<"found!";
}
else{
    cout<<"Not found!";
}
  return 0;
}

//pre deine function for array
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int arr [ ] = {2,3,5,6,7,8};
int size = 6;
if(binary_search(arr,arr + size ,8)){
    cout<<"found!";
}
else{
    cout<<"Not found!";
}
  return 0;
}
*/
