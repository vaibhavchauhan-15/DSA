// Replace @ with " "
#include<bits/stdc++.h>
using namespace std;

void replace(char ch[],int n){
    int index=0;
    while (ch[index]!='\0')
    {
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
    cout << "Relaced :"<<ch <<endl;
    
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int n=strlen(ch);
    replace(ch,n);
    return 0;
}