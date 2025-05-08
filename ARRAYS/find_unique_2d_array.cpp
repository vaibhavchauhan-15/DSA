//sum of 2d array 
#include<iostream>
#include<vector>
using namespace std;
// create funtion to add the coloms
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
    int key;
int brr[2][2];
int rows=2;
int cols=2;
int element ;
cout<<"enter the element :"<<endl;
//taking input in row wise 
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
  cin>>brr[i][j];
   } 
}
//taking input of key
cout<<"enter the key";
cin>>key;
//print the values
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
    if(brr[i][j]==key){
      int element = brr[i][j]; 
     } 
   } 
   cout<<endl;
}
if(element==key){
    cout<<" number found :"<<element;
}else {
    cout<<"not found"<<endl;
}

//function call
//sum(brr, rows, cols);
    return 0;
}