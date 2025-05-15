#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[3][3],int rows,int cols){
    int max=INT_MIN;
    for (int i = 0; i < rows; i++) {
        for (int j =0; j < cols; j++) {
            if(arr[i][j]>max ) {
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int arr[3][3]={{1,2,3},{4,15,6},{7,8,9}};
    int rows=3;
    int cols=3;
    int result = findMax(arr,rows,cols);
   cout<<"Max Element is :"<<result<<endl;
}