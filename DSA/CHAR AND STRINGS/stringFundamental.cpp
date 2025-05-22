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
    string Lname;
    cout << "Enter last name :";
    getline(cin , Lname);
    //print
    // cout<<name<<endl;
    // cout << "First letter of name is :" <<name[0]<<endl;
    
    // //find lenght
    // cout << "Lengh of string is : "<<name.length() <<endl;

    // //check empty or not
    // cout << "String is empty or not(0 =false | 1 = true) : "<<name.empty() <<endl;

    // //char at position
    // cout << "Character at 0 position is : "<<name.at(0) <<endl;

    // cout << "Front char is : "<<name.front() <<endl;
    // cout << "Last char is :"<<name.back() <<endl;

    cout << "Before contacatinate "<<endl<<"Name :"<<name<<endl<<"Last Name : "<<Lname <<endl;

    //containate two string (append)
    name.append(Lname);
    cout << "After contacatinate :"<<name <<endl;

    // return 0;
}