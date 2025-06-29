#include <iostream>
using namespace std;

class Student
{

//access modifier
private:
//properties
string gf;

//access modifier
public:
    //properties
    int id;
    string name;
    int age;
    string course;

    //defaul constructor(ctor) by default assign garbage value
    Student(){
        // cout << "Default ctor called" <<endl;
    }

    //parametrize ctor
    Student(int _id , string _name , int _age , string _course){
        // cout << "Parametrize ctor called" <<endl;
        id=_id;
        name=_name;
        age=_age;
        course=_course;
    }
    
    //parametrize ctor(using this keyword)
    Student(int id , string name , int age , string course , string gf ){
        // cout << "Parametrize ctor called" <<endl;
        this->id=id;
        this->name=name;
        this->age=age;
        this->course=course;
        this->gf=gf;
    }
    //behaviour
    void study()
    {
        cout << "Studying" << endl;
    }
    void exam(){
        cout << "Giving Exam" <<endl;
    }
    void play(){
        cout << "Playing" <<endl;
    }

private:
    void gfChatting(){
        cout << "Chatting with gf ." <<endl;
    }
};
int main()
{
    Student s1; 
    s1.id=1;
    s1.name="vaibhav";
    s1.age=20;
    s1.course=6;
    cout<<s1.name<<endl;
    Student s2(2,"aman",22,"b.tech","amani");    
    cout << s2.name <<endl;

    // cout << sizeof(Student) << endl;//size of the class
    return 0; 
}