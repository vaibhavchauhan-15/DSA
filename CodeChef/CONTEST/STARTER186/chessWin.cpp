#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;cin>>a>>b;
	if(a==b){
	    cout<<"1";
	}else{
	    if(a<b){
	        cout<<(b-a)+1;
	    }
	}
	return 0;
    
}
