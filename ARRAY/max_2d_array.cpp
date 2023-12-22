//MAXIMUM NUMBER 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxii(int brr[4][4],int rows,int cols){
   int maxi=INT_MIN;
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