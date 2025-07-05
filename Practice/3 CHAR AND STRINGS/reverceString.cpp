#include<bits/stdc++.h>
using namespace std;
void reverseString(char ch[] ,int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    
    cout << "Reversed String is :"<<ch <<endl;
}
int main(){
    char ch[]={"va"};
    cout << "Before reverse :"<<ch <<endl;
    int n=strlen(ch);
    reverseString(ch,n);
    return 0;
}