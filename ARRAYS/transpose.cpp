//TRANSOPSE OF 2D ARRAY
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
cout<<"transpose is:"<<endl;
transpose(brr,rows,cols);

}