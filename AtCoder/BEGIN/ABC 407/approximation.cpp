#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    float value =(float) a/b;
    cout<<"Divide :"<<value<<endl;
    int nearest = round(value);
    cout << "Final output :"<<nearest <<endl;
    return 0;
}