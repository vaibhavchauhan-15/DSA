
#include<iostream>
#include<vector>
using namespace std;

void isLightAll(string s,int n){
    vector<bool>all(n,false);
    for (int i = 0; i < n; i++) {
        if(s[i]=='1'){
            if(i>0){
                all[i-1]=true;
            }
            all[i]=true;
            if(i<n-1){
                all[i+1]=true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if(all[i]==false){
            cout << "No" <<endl;
            return;
        }
    }
    cout << "Yes" <<endl;

}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        isLightAll(s,n);

    }
    return 0;
}