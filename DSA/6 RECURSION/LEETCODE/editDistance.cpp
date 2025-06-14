#include<iostream>
using namespace std;

class Solution {
public:

    int solve(string& word1 , string& word2 , int i , int j){
        int ans;
        //base
        if(i>=word1.size()){
            return word2.size()-j;//may be word1 chota hai word2 se
        }
        if(j>=word2.size()){
            return word1.size()-i;//may be word2 chota hai word1 se
        }
        //operation
        //match kar gaye to koi operation nhi hoga
        if(word1[i]==word2[j]){
            ans=0 + solve(word1,word2, i+1 , j+1);
        }else{
            //not match
            // insert
           int  ans1=1 + solve(word1 ,word2 , i , j+1);
            //remove
           int  ans2=1 + solve(word1 ,word2 , i+1 , j);
            //replace
           int  ans3=1 + solve(word1 ,word2 , i+1 , j+1);

           ans=min(ans1 , min (ans2 ,ans3 ));
        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        int i=0;//word1
        int j=0;//word2
        int ans =solve(word1,word2,i,j);
        return ans;
    }
};

int main(){
   string word1 = "intention";
   string word2 = "execution";
   Solution sc;
   cout << "Minimum Operation is :"<<sc.minDistance(word1,word2) <<endl;
    return 0;
}