#include<bits/stdc++.h>
using namespace std;
vector<bool> seive(int n){
    vector<bool>prime(n +1 ,true);
    prime[0]=prime[1]=false;
    int m=sqrt(n);//avoid multiple computation
    for (int i = 2; i <= m; i++) {//use i< root(n) 
        if(prime[i]==true){
            int j=i*i;//change to i*i
            //first unmarked number would be i*i , as other have been marked by 2 to (i-1)
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
    }
    return prime;
    
}

vector<bool>segSeive(int L , int R){
    vector<bool>segPrime=seive(sqrt(R));
    vector<int>basePrime;
    for (int i = 0; i < segPrime.size(); i++) {
        if(segPrime[i]){
            basePrime.push_back(i);
        }
    }
    

    vector<bool> seggSeive(R-L+1,true);
    if(L==1 || L==0){
        seggSeive[L]=false;
    }

    for(auto prime : basePrime){
        int first_mul=(L/prime)*prime;
        if(first_mul<L){
            first_mul+=prime;
        }
        int j = max (prime * prime , first_mul);
        while (j<=R)
        {
            seggSeive[j - L]=false;
            j+=prime;   
        }
        
    }
    return seggSeive;
}
int main(){
    cout << "Enter First number  :";
    int L;cin>>L;
    cout << "Enter Last number  :";
    int R;cin>>R;
    vector<bool> ans=segSeive(L,R);
    for (int i = 0; i < ans.size(); i++) {
        if(ans[i]){
            cout<<i +L<<" ";
        }
    }
    return 0;
}