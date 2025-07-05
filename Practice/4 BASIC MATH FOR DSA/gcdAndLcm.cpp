//*****GCD FORMULA******* */ gcd(a,b)=gcd(a-b, b) a>b , gcd(a,b)=gcd(b-a ,a) b>a
#include<bits/stdc++.h>
using namespace std;
int gcd(int n , int m){
    // if(n==0) return m;
    // if(m==0) return n;
    int ans[2];
    while (n>0 && m>0)
    {   
        if(n>m){

            n=n-m;
        }else{
            m=m-n;  
        }
    }
    return n==0 ? m : n;
    
}
// *******LCM FORMULA *********
// lcm(a,b)= (a*b) / gcd (a,b);

int lcm(int a , int b){
    int ans =  (a*b)/gcd(a,b);
    return ans;
}


int main(){
    int n,m;cin>>n>>m;
    int result = gcd(n , m);
    cout << "GCD is :"<<result <<endl;
    cout<<"LCM is :"<<lcm(n , m);
    return 0;
}