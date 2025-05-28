#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=10;
    // int * b=&a;//assign  address of a to b
    // cout << a <<endl;
    // cout << &a <<endl;//print address of a
    // cout << b <<endl;//print address of a
    // cout << &b <<endl;//print address of b
    // cout << *b <<endl;//print value of a
    
    
    // //size of char pointer
    // cout << sizeof(b) <<endl;
    // char k='a';
    // char * ptr=&k;
    // cout << &k <<endl;//address of k
    // cout <<"address of k" << ptr <<endl;//address of k
    // cout <<"value of k" << *ptr <<endl;//value of k
    // cout << "Size of ptr :"<<sizeof(ptr) <<endl;
    
    //  //size of long pointer
    // long lachi=8796;
    // long * lptr=&lachi;
    // cout << &lachi <<endl;//address of lachi
    // cout <<"address of lachi :" << lptr <<endl;//address of lachi
    // cout <<"value of lachi :" << *lptr <<endl;//value of lachi
    // cout << "Size of lptr :"<<sizeof(lptr) <<endl;
    
    
    // //print size of all type of pointer
    // int a=15;
    // int * b=&a;//assign  address of a to b
    // char k='a';
    // char * ptr=&k;
    // long lachi=8796;
    // long * lptr=&lachi;
    // bool bull=true;
    // bool * bptr=&bull;
    // cout << "Now printig size of all type of pointer" <<endl;
    // cout << sizeof(b) <<endl;
    // cout << sizeof(ptr) <<endl;
    // cout << sizeof(lptr) <<endl;
    // cout << sizeof(bptr) <<endl;


    // // bad practice
    // int *pptr;
    // cout << "bad practice :"<<pptr <<endl;//it store garbage address or illegal memory access


    // // use like this 
    // int *gooodptr=nullptr;
    // int *goodptr=0;
    // cout << "better practice :"<<gooodptr <<endl;
    // cout << "better practice :"<<goodptr <<endl;


    // //pointer manupulation
    // int p=40;
    // int *pptr=&p;
    // //change address
    // cout << pptr <<endl;
    // pptr=pptr+1;
    // cout << pptr <<endl;
    
    // change value
    int p=40;
    int *pptr=&p;
    cout << *pptr <<endl;
    *pptr=*pptr+1;
    cout << *pptr <<endl;
    return 0;
}