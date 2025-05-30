#include<bits/stdc++.h>
using namespace std;

void solve1(int* p){
    *p+=5;//it change the original values
}
void solve2(int* p){
    p+=5;//it make copy of p and assign the new address 
    cout << p <<endl;
}
int main(){
    int a=5;
    int* p = &a;
    cout << p <<endl;
    cout << &p <<endl;
    cout << *p <<endl;
    
    cout << "after solve2 call" <<endl;
    solve2(p);
    
    cout << p <<endl;
    cout << &p <<endl;
    cout << *p <<endl;
    
    cout << "after solve1 call" <<endl;
    solve1(p);

    cout << p <<endl;
    cout << &p <<endl;
    cout << *p <<endl;
    return 0;
}