#include <iostream>
using namespace std;
int g = 100; // global variable

int main()
{
    int l = 50; // local variable
    cout << g << endl;
    cout << l << endl;
    int g = 10;
    cout << g << endl;
    {
        int g = 40;
        cout << g << endl;//first prefrence to local varible with same name
        cout << ::g << endl; // access global variable
    }
    return 0;
}