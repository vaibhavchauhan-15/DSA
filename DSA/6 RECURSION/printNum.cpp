#include<iostream>
#include<vector>
using namespace std;

void printNum(long long n){
    if(n==0){
        return;
    }
    int rem=n%10;
    n=n/10;
    printNum(n);
    cout <<rem <<" ";
}

void inserElement(vector<int>& arr , int n){
    if(n==0){
        return;
    }
    int rem=n%10;
    n=n/10;
    inserElement(arr,n);
    arr.push_back(rem);
}

int main(){
    long long n=654556549;
    vector<int>arr;
    cout << "Before" <<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    cout << "" <<endl;
    // printNum(n);
    inserElement(arr,n);
    cout << "After" <<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}