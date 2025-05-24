// 2125. Number of Laser Beams in a Bank



// Input: bank = ["011001","000000","010100","001000"]
// Output: 8
// Explanation: Between each of the following device pairs, there is one beam. In total, there are 8 beams:
//  * bank[0][1] -- bank[2][1]
//  * bank[0][1] -- bank[2][3]
//  * bank[0][2] -- bank[2][1]
//  * bank[0][2] -- bank[2][3]
//  * bank[0][5] -- bank[2][1]
//  * bank[0][5] -- bank[2][3]
//  * bank[2][1] -- bank[3][2]
//  * bank[2][3] -- bank[3][2]
// Note that there is no beam between any device on the 0th row with any on the 3rd row.
// This is because the 2nd row contains security devices, which breaks the second condition.

#include<bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string>& bank) {
    vector<int > countDevive;
    //count the number of device in each row and push to countDevice
    for (int i = 0; i < bank.size(); i++) {
        int count=0;
        string curr = bank[i];
        for(auto ch : curr){
            if(ch=='1'){
                count++;
            }
        } 
        countDevive.push_back(count); 
    }  
    cout <<endl<< "printing countdevide";
    for (int i = 0; i < countDevive.size(); i++) {
        cout<<countDevive[i]<<" ";
    }

    
    vector<int > nonEmptyDevice;
    //remove zero from  CountDevice
    for (int i = 0; i < countDevive.size(); i++) {
        if(countDevive[i]!=0){
            nonEmptyDevice.push_back(countDevive[i]);
        }   
    }

    cout <<endl<< "Print the non empy ";
    for (int i = 0; i < nonEmptyDevice.size(); i++) {
        cout<<nonEmptyDevice[i]<<" ";
    }



    int countLaserBeam=0;
    for (int i = 0; i < nonEmptyDevice.size(); i++) {
        if(i+1<nonEmptyDevice.size()){

            countLaserBeam=countLaserBeam + (nonEmptyDevice[i] * nonEmptyDevice[i + 1] );   
        }
    }
    cout <<endl<< "laser beam is :"<<countLaserBeam <<endl;
    return countLaserBeam;
}

int main(){
    vector<string> bank={"011001","000000","010100","001000"};
    int result = numberOfBeams(bank);
    cout << "Total Number of Laser Beam is :"<<result <<endl;
    // numberOfBeams(bank);
    return 0;
}