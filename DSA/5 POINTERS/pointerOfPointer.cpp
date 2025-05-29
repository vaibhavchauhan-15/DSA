#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=8;
    int* ptr=&a;//pointer
    int** ptr1=&ptr;//pointer of pointer or double pointer it store the address of ptr
    int*** ptr2=&ptr1;//tripple pointer it store the address of ptr1
    int**** ptr3=&ptr2;//fourth pointer it store the address of ptr2

cout << "Printing all pointer address" <<endl; 
cout << "ptr :"  <<endl;


    cout<<*** ptr3<<endl;//it print the address of ptr2
    cout<< ptr2<<endl;//it print own address
    
    return 0;
}