#include<bits/stdc++.h>
using namespace std;
int main(){

    // //char array
    // char ch[10]="vaibhav";
    // char * cptr=ch;//here char in the form of char array so assign base address of ch
    // cout << "Printing Char Pointer :"<<cptr <<endl;//here it print entire char
    // cout << "Printing Char Pointer :"<<*cptr <<endl;//here it print entire char

    // //string  array
    // string  s[10]="vaibhav";
    // string * sptr=s;//here string  in the form of string  array so assign base address of s
    // cout << "Printing string  Pointer :"<<sptr <<endl;//here it print base address 

    // //int array
    // int arr[10]={1,5,8,7,2,3};
    // int *ptr=arr;//here assign the base address
    // cout << "Printing Int Pointer :"<<ptr <<endl;//it print address of arr[0] or base address
    
    // //long  array same as integer
    // long larr[10]={1,5,8,7,2,3};
    // long *lptr=larr;//here assign the base address
    // cout << "Printing LOngPointer :"<<lptr <<endl;//it print address of arr[0] or base address

    char ch='a';
    //pointer to char
    char *cptr=&ch;
    // cout << cptr <<endl;
    
    
    //pointer to char array
    char ch1[5]="noon";
    // char* cptr1=&ch1;//this is not valid
    char (*cptr1)[5]=&ch1;//this is  valid

    // char array of pointer
    char * ch2[5];//it create array where strore address at every index 
                  //initialy it store garbase address

    ch2[1]=&ch1[1];//here we store the address of ch1[1]
    cout << ch2[1] <<endl;//it print after ch1[1] index values "oon"







    return 0;
}