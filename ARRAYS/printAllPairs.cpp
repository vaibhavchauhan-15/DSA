#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,8,5,7,8};
    int n=6;
    // cout<<"Double pairs "<<endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j =0; j < n; j++){

    //         cout<<arr[i]<<","<<arr[j]<< " ";  
    //     }
    //     cout<<endl;
    // }

    // //reverse
    // cout<<"Reversed "<<endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j =5 ; j >= 0; j--){

    //         cout<<arr[i]<<","<<arr[j]<< " ";  
    //     }
    //     cout<<endl;
    // }
    cout<<"Triplet Pairs"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j =0 ; j < n; j++){
            for (int k = 0; k < n; k++) {
                
                cout<<arr[i]<<" ,"<<arr[j]<< " , " <<arr[k]<<" ";  
            }

        }
        cout<<endl;
    }

    return 0;
}