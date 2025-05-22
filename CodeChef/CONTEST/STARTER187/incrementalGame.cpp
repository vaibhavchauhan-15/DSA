#include<bits/stdc++.h>
using namespace std; 

bool whoWin(int x,int y,int k){
    //edge case
    // if(k>x || k>y) return true;
    for (int i = 1; i <= k; i++) {
        //pile X
        if(x>=i){
            int newPileX=x-i;
            int newPileY=y;
            if(newPileX<=i && newPileY<=i){
                return true;
            }          
        }
        if(y>=i){
            int newPilesY=y-i;
            int newPilesX=x;
            if(newPilesY<=i && newPilesX<=i){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int x,y,k;cin>>x>>y>>k;
        if(whoWin(x,y,k)){
            cout << "Alice" <<endl;
        }else{
            cout << "Bob" <<endl;
        }
    }
    
    return 0;
}