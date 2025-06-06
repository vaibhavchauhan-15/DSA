#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;cin>>a>>b;
    int totalSlice=(a + 1)*4 + (b*3) ;
    int totalPizza=(totalSlice+7)/8;
    cout<<totalPizza<<endl;
}
