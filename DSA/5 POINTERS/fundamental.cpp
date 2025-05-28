#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int * b=&a;//assign  address of a to b
    cout << a <<endl;
    cout << &a <<endl;//print address of a
    cout << b <<endl;//print address of a
    cout << &b <<endl;//print address of b
    cout << *b <<endl;//print value of a
    return 0;
}