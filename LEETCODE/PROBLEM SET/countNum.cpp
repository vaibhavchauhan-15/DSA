#include<iostream>
using namespace std;
int main(){
    long long num;cin>>num;
    int count=0;
    while(num>=10){
        count++;
        num/=10;
    }
    if(num==0){
        cout << "Total digit is :0" <<endl;
    }else if(num>=10){
        
        cout << "Total digit is  :"<<count +1<<endl;
    }
    else{
        cout << "Total digit is :1" <<endl;

    }
    return 0;
}