#include <bits/stdc++.h>
using namespace std;
int findLength(char ch[], int n)
{
    int size = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ch[i] == '\0') break;

    //     size++;
    // }
    int i=0;
    while(ch[i] !='\0')

        i++;
    return i;
    // return size;
}
int main()
{
    // char ch[20];
    // cin>>ch;
    // cin.getline(ch,20);
    // int n=20;
    // cout << "Printing : " <<ch<<endl;//stop after null char
    // for (int i = 0; i < n; i++) {
    //     int temp=(int)ch[i];
    //     cout <<temp<< " ";
    // }

    char ch[20] = "vaibhav chauhan";
    int n = 20;
    int size = findLength(ch, 20);
    cout << "Size is :" << size << endl;
    cout << "Size using inbuilt fun :"<<strlen(ch) <<endl;
    return 0;
}