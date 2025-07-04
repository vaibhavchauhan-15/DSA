#include <iostream>
using namespace std;
class Bird
{
public:
    int age; // in month
    int noLeg;
    int weight; // in gram
    string color;
    string name;

    void fly()
    {
        cout << "flying" << endl;
    }
    void eat()
    {
        cout << "eating" << endl;
    }
};

class Sparrow : public Bird
{
public:
    // ctor
    Sparrow(int age, int noLeg, int weight, string color, string name)
    {
        this->age = age;
        this->noLeg = noLeg;
        this->weight = weight;
        this->color = color;
        this->name = name;
    }
    void grass()
    {
        cout << "Grassing" << endl;
    }
};

class Peigon : public Bird
{
public:
    Peigon(int age, int noLeg, int weight, string color, string name)
    {
        this->age = age;
        this->noLeg = noLeg;
        this->weight = weight;
        this->color = color;
        this->name = name;
    }
    void guttering()
    {
        cout << "guttering" << endl;
    }
};
int main()
{
    Sparrow s1(2, 2, 200, "black", "kalua");
    cout << s1.color << endl;
    s1.grass();
    s1.fly();

    Peigon p1(5,2,100,"grey","soni");
    cout << p1.name << endl;
    p1.guttering();
    return 0;
}