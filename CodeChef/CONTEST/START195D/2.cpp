#include <iostream>
#include<vector>
using namespace std;

void getScholership(int n , vector<int>  marks){
    int index=1;
    while(index<=n){
        int avg=0;
        for (int i = 0; i < index; i++) {
            avg=avg+marks[i];
        }
        avg=avg/index;
        // cout << "Average is :"<<avg<<"at index :"<<index << endl;   
        if(avg<40){
            cout<<"No"<<endl;
            return;
        }
        index+=1;
    }
            
        
    cout << "Yes" << endl;
    return;
    
}

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
       vector< int> marks(n);
        for (int i = 0; i < n; i++) {
            cin>>marks[i];
        }
        getScholership(n,marks);
    }
    return 0;
}