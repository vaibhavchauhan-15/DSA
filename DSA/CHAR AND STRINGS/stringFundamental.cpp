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
    // cout<<name<<endl;
    // cout << "First letter of name is :" <<name[0]<<endl;
    
    //find lenght
    cout << "Lengh of string is : "<<name.length() <<endl;

    //check empty or not
    cout << "String is empty or not(0 =false | 1 = true) : "<<name.empty() <<endl;

    //char at position
    cout << "Character at 0 position is : "<<name.at(0) <<endl;

    return 0;
}