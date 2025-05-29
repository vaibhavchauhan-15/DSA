#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int size){
    cout << "Inside solve arr -> :"<<arr <<endl;
    cout << "Inside solve &arr -> :"<<&arr <<endl;//it print the addres of address
    cout << "Inside solve &arr[0] -> :"<<&arr[0] <<endl;  
}

int main(){
    int arr[5]={10,20,30,40,50};

    cout << "Inside main arr -> :"<<arr <<endl;
    cout << "Inside main &arr -> :"<<&arr <<endl;
    cout << "Inside main &arr[0] -> :"<<&arr[0] <<endl;

    solve(arr,5);
    return 0;


    
}