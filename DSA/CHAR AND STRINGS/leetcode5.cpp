// 647. Palindromic Substrings

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".


#include<bits/stdc++.h>
using namespace std;

int expand(string s, int i , int j){
    int count=0;
    while(i>=0 && j< s.size() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s) {
    int n=s.size();
    //odd substring
    int totalCount=0;
    for (int i = 0; i < n; i++) {

        //odd where i and j at same position
        int oddCount=expand(s,i,i);
        int evenCount=expand(s,i,i+1);
        //odd where i and j at diff position
        totalCount=totalCount + oddCount + evenCount;       
    } 
    return totalCount;  
}
int main(){
    string s={"aaa"}; 
    int result = countSubstrings(s);
    cout << "Total palindrome is :"<<result <<endl;
    
    return 0;
}