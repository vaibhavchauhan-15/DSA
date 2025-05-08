#include <iostream>
using namespace std;

int main() {
    // update your code here
    int side1 , side2 ,side3;
    cin>>side1>>side2>>side3;
    
    if(side1==side2 && side1 == side3){
        cout<<"Equilateral";
    }else if(side1==side2 || side1 == side3){
		cout<<"Isosceles";
    }else{
		cout<<"Scalene";
    }

    return 0;
}
