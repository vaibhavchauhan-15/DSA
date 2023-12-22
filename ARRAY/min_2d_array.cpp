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