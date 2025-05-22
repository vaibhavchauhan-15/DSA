#include<bits/stdc++.h>
using namespace std;
void upperCase(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){
        char curr=ch[index];
        if(curr>= 'a' && curr <='z' ){
            ch[index]=curr - 'a' + 'A';
        }
        index++;   
    }
    cout << "Upper cased string is :"<<ch <<endl;
}

void lowerCase(char ch1[],int n){
    int index=0;
    while(ch1[index]!='\0'){
        char curr=ch1[index];
        if(curr>= 'A' && curr <='Z' ){
            ch1[index]=curr - 'A' + 'a';
        }
        index++;   
    }
    cout << "Lower cased string is :"<<ch1 <<endl;
}
int main(){
    // char ch[]="VaiBHav";
    // char ch1[]="chauhAN";
    char ch[100],ch1[100];
    cout << "ENTER STRING TO CONVERT TO UPPER CASE :";
    cin.getline(ch,100);
    int n=strlen(ch);
    upperCase(ch,n);
    cout << "enter string to convert lower case :";
    cin.getline(ch1,100);
    int m=strlen(ch1);
    lowerCase(ch1,m);
    return 0;
}