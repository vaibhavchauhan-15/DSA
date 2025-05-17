#include<bits/stdc++.h>
using namespace std;

void  transpose(int arr[3][3],int rows,int cols){
    for (int i = 0; i < rows; i++) {
        for (int j =i; j < cols; j++) {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
}
void  print2DArray(int arr[3][3],int rows,int cols){
    for (int i = 0; i < rows; i++) {
        for (int j =0; j < cols; j++) {
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
int main(){
    int arr[3][3]={ {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int rows=3;
    int cols=3;

    cout<<"Before Transpose"<<endl;
    print2DArray(arr,rows,cols);
    cout<<"Doing Transpose"<<endl;
    transpose(arr,rows,cols);
    cout<<"After Transpose"<<endl;
    print2DArray(arr,rows,cols);
    
    return 0;
}