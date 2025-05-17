#include<bits/stdc++.h>
using namespace std;

void  rowWiseSum(int arr[3][3],int rows,int cols){
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j =0; j < cols; j++) {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void  colWiseSum(int arr[3][3],int rows,int cols){
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j =0; j < cols; j++) {
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3]={ {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int rows=3;
    int cols=3;

    cout<<"Sum in  Row Wise"<<endl;
    rowWiseSum(arr,rows,cols);
    cout<<"Sum in  Col Wise"<<endl;
    colWiseSum(arr,rows,cols);
    
    return 0;
}