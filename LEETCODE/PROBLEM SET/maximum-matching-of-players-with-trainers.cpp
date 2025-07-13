#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int count =0;
        int i=0;
        int j=0;
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j++]){
                i++;
                count++;
            }
            // cout << "i ="<<i << endl;
            // cout << "j ="<<j << endl;
            
        }
        return count;
    }
};

int main() {
    vector<int> players={1,1,1};
    vector<int> trainers={10};

    Solution sc;
    cout << sc.matchPlayersAndTrainers(players,trainers) << endl;

    return 0;
}