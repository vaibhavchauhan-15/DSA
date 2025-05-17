#include<bits/stdc++.h>
using namespace std;

bool findTarget(int arr[3][3],int target,int rows,int cols){
    for (int i = 0; i < rows; i++) {
        for (int j =0; j < cols; j++) {
            if(arr[i][j]==target ) {
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    int target=1;
    int result = findTarget(arr,target,rows,cols);
    if(result==1){
        cout<<"found"<<endl;
    }else {
        cout<<"not found"<<endl;
    }
    return 0;
}