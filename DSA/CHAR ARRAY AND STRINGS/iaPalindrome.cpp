//using two pointer approatch
#include<bits/stdc++.h>
using namespace std;

void isPalindrome(char ch[] ,int n){
    char original[100];
    strcpy(original,ch);
    int i=0;
    int j=n-1;
    while (i<=j)
    {   
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

    if(original==ch){
        cout << "Palindrome" <<endl;
    }else{
        cout << "Not Palindorme" <<endl;
    }
} 

int main(){
    char ch[100];
    cin.get(ch , 100);
    int n=strlen(ch);
    isPalindrome(ch,n);
    return 0;
}