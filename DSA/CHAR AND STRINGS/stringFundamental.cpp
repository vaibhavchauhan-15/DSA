#include<iostream>
#include<string>
using namespace std;
int main(){
    cout << "Enter name :";
    //creation
    string name;
    //input
    // cin>>name;
    getline(cin , name);
    //print
    cout<<name<<endl;
    // cout << "First letter of name is :" <<name[0]<<endl;

    return 0;
}