#include<bits/stdc++.h>
using namespace std;
void seive(int n){
    vector<bool>prime(n ,true);
    prime[0]=prime[1]=false;
    for (int i = 2; i < n; i++) {
        if(prime[i]==true){
            int j=i*2;
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
    }
    cout << "Prime number are :";
    int count=0;
    for (int i = 0; i < n; i++) {
        if(prime[i]){
            count++;
            cout<<i<<" ";
        }
    }
    cout << "" <<endl;
    cout << "Total Prime Number from 0 to "<<n<<" is :"<<count <<endl;
}
int main(){
    cout << "Enter Number :";
    int n;cin>>n;
    seive(n);
    return 0;
}