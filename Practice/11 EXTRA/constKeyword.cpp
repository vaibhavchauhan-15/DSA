#include <iostream>
using namespace std;

int main() {

    //const data // non const pointer

    cout << "const data and non const pointer" << endl;
    int const * x = new int(10);//const data
    // *x=20;//cant change
    int y=20;
    cout <<"Before : "<< *x << endl;
    x=&y;//change the pointer
    cout << "After : "<<*x << endl;
    
    
    //non const data // const pointer
    cout << "const data and non const pointer" << endl;
    int  * const y = new int(100);//const pointer
    // *y=200;
    
    return 0;
}