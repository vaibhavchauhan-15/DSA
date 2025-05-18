#include<bits/stdc++.h>
using namespace std;

int findQuotient(int divident ,int divisor){
    //edge cases
    if(divisor==0) return -1;
    if(divident==0) return 0;

    int ans=0;
    int start=0;
    int end=divident;
    
    while(start<=end){
        // cout<<"start :"<<start<<"  End :"<<end<<endl;
        int mid=start+(end-start)/2;
        //base case
        if(divisor*mid<=divident){
            ans= mid;
            start=mid+1;
        }
        if(mid*divisor>divident){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int divident=0;
    int diviser =5;
    int result = findQuotient(abs(divident),abs(diviser));
    if(result!=-1){
        if(divident>0 && diviser<0 || divident<0 && diviser>0){
            result=0-result;
        }
        cout << "Quotient is :"<<result <<endl;
    }else{
        cout << "Invalid Divisor it Give Infinite Quotient!!!!!" <<endl;
    }
    
    
    return 0;
}