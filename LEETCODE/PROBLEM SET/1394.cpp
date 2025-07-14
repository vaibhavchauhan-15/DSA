#include <iostream>
#include<vector>
#include<unordered_map>
#include<limits>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int , int > count;//count the frequency of the number

        for(int num : arr){
            count[num]++;
        }

        int max=-1;
        for(auto pair : count){
            if(pair.first==pair.second){
                if(max<pair.first) max=pair.first ;
            }
        }
        return max;
    }
};

int main() {
    Solution sc;
    vector<int >arr={2,2,2,3,3};
    cout << sc.findLucky(arr) << endl;
    return 0;
}