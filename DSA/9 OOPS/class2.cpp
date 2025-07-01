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
        cout << "Default ctor called" <<endl;
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

    // copy ctor
    Student(const Student& scrobj){
        cout << "Copy Ctor Called" <<endl;
        this->id=scrobj.id;
        this->name=scrobj.name;
        this->age=scrobj.age;
        this->course=scrobj.course;
        // this->gf=gf;
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

    Student s1(1,"vaibhav" , 20 , "b.tech");
    //copy ctor   
    Student  s2;//here default ctor are called
    s2=s1; //this is bad practice and here copy withou ctor
    Student s3=s1;//here copy ctor called
    Student s4(s1);//another way
    cout << s1.name <<endl;
    cout << s2.name <<endl;
    cout << s3.name <<endl;
    cout << s4.name <<endl;
   
    return 0;  
}