#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0; //not divisible by m
        int num2=0;//divisible by m
        
        for (int i = 1; i <= n; i++) {
            if(i%m==0){
                num2+=i;
            }
            else{
                
                num1+=i;
            }  
        }
        // cout<<"Num 1 :"<<num1<<endl;
        // cout<<"Num 2 :"<<num2<<endl;
        return num1 - num2;
    }
};
int main(){
    int n ,m;
    cin>>n>>m;
    Solution sc;//object of solution
    cout<<sc.differenceOfSums(n,m);
    return 0;
}