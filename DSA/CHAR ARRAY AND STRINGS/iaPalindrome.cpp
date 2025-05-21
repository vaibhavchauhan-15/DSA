//using two pointer approatch
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char ch[] ,int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {   
        if(ch[i]==ch[j]){
            i++;
            j--;
        }else return false;
    }
    return true;
    
} 

int main(){
    char ch[100];
    cin.get(ch , 100);
    int n=strlen(ch);
    bool sahiYaGalat=isPalindrome(ch,n);
    if(sahiYaGalat==true){
        cout << "Palindrome" <<endl;
    }else{
        cout << "Not Palindorme" <<endl;
    }
    return 0;
}