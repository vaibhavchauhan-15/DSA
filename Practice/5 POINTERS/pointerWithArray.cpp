#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,48,62,235,4}; 
    int n=6;

    // //base address and value
    // cout << arr <<endl;//address of arr
    // cout << &arr <<endl;//address of arr
    // cout << &arr[0] <<endl;//address of arr
    // cout << arr[0] <<endl;
    // cout << *arr <<endl;//printing base value means arr[0]
    // cout << *arr+1 <<endl;//add 1 to base value means arr[0] +1;
    // cout << *(arr)+1 <<endl;//add 1 to base value means arr[0] +1;
    // cout << *(arr+1 )<<endl;//arr[0 + 1]=arr[1]=5;
    // cout << *(arr+2 )<<endl;//print 48
    // cout << *(arr+3 )<<endl;//print 62
    // cout << *(arr+4 )<<endl;//print 235
    // cout << *(arr+5 )<<endl;//arr[0 + 5] is equal to arr[5]=4;


    // int *aptr[6];
    // for (int i = 0; i < n; i++) {
    //    aptr[i]=&arr[i]; 
    // }

    // cout << "Print address of all array elements" <<endl;
    // for (int i = 0; i < n; i++) {
    //     cout<<aptr[i]<<" ";
    // }
    // cout << "Print all element in the arr" <<endl;
    // for (int i = 0; i < n; i++) {
    //     cout<<*aptr[i]<<" ";
    // }


    int brr[4]={1,10,56,45};
    int* bptr=brr;//it store the base address of brr means &brr[0]
    cout<<*(bptr) +2<<endl;//it means brr[0] +2;
    cout<<*(bptr + 2)<<endl;//it means brr[0 + 2 ];
    cout<<(*bptr + 5)<<endl;//it means brr[0 ]+ 5 ];

    for (int i = 0; i < 4; i++) {
        cout <<*(bptr + i ) << " ";
    }







    return 0;
}