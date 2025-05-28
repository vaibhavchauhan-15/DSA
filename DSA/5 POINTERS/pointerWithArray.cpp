#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,48,62,235,4}; 

    //base address and value
    cout << arr <<endl;//address of arr
    cout << &arr <<endl;//address of arr
    cout << &arr[0] <<endl;//address of arr
    cout << arr[0] <<endl;
    cout << *arr <<endl;//printing base value means arr[0]
    cout << *arr+1 <<endl;//add 1 to base value means arr[0] +1;
    cout << *(arr)+1 <<endl;//add 1 to base value means arr[0] +1;
    cout << *(arr+1 )<<endl;//arr[0 + 1]=arr[1]=5;
    cout << *(arr+2 )<<endl;//print 48
    cout << *(arr+3 )<<endl;//print 62
    cout << *(arr+4 )<<endl;//print 235
    cout << *(arr+5 )<<endl;//arr[0 + 5] is equal to arr[5]=4;





    return 0;
}