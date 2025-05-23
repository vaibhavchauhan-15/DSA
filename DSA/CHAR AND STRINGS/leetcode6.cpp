// 2325. Decode the Message
#include<bits/stdc++.h>
using namespace std;
string decodeMessage(string key, string message) {
    //create mapping
    char start='a';
    char mapping[300]={0};
    for(auto ch : key){
        if(ch!=' ' && mapping[ch]==0 ){
            mapping[ch]=start;
            start++;
        }
    }
    //use mapping 
    string ans; 
    for(auto ch : message){
        if(ch==' '){
            ans.push_back(' ');
        }else{
            char deccodeChar = mapping[ch];
            ans.push_back(deccodeChar);
        }
    }
    return ans;
    
    }
int main(){
    string key = "the quick brown fox jumps over the lazy dog";
    string message="vkbs bs t suepuv";
    string result =  decodeMessage(key,message);
    cout<<"Decoded Message is :"<<result<<endl;       
    return 0;
}