//2D ARRAY

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
cout<<"this is working in row wise"<<endl;
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
cout<<"this is working in collomns wise"<<endl;
int drr[2][2];
cout<<"enter the element :"<<endl;
//taking input in colomn wise 
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cin>>drr[j][i]; 
   } 
}
//printing colomn wise
cout<<"you entered this :"<<endl;
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cout<<drr[j][i]<<" "; 
   } 
   cout<<endl;
}
cout<<"convert row into colomns"<<endl;
int crr[2][2];
cout<<"enter the element :"<<endl;
//taking input in row wise 
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cin>>crr[i][j]; 
   } 
}
//printing colomn wise
cout<<"you entered this :"<<endl;
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cout<<crr[j][i]<<" "; 
   } 
   cout<<endl;
}


    return 0;
}