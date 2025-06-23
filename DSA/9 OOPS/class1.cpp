#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    // string name;
    // int age;
    // string course;

    void study()
    {
        cout << "Studying" << endl;
    }
    // void exam(){
    //     cout << "Giving Exam" <<endl;
    // }
    // void play(){
    //     cout << "Playing" <<endl;
    // }
};
int main()
{
    Student s1;  
    s1.study();
    Student s2;   

    cout << sizeof(Student) << endl;
    return 0;
}