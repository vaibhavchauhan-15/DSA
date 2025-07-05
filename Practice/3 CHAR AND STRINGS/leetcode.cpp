#include<bits/stdc++.h>
using namespace std;
int findMinDifference(vector<string>& timePoints) {
    //seprate h and min
    //convert hours into min 
    //convert to intger
    //total min
    //sort
    //edge cases
    if(timePoints.size()<=0) return 0;

    vector<int>finalMin;
    for(const string& time :timePoints){
         //seprate h and min
        int hours=stoi(time.substr(0,2));//convert to intger
        int min =stoi(time.substr(3,2));

        //convert hours into min 
        int totalMin=(hours*60) + min;
        finalMin.push_back(totalMin);
    }

    //sort finalMin
    sort(finalMin.begin() , finalMin.end());

    //find minimum differece
    int minimunMin=INT_MAX;
    for (int i = 1; i < finalMin.size(); i++) {
        minimunMin=min(minimunMin , finalMin[i] - finalMin[i-1]);
    }
    minimunMin=min(minimunMin,1440 - (finalMin.back() - finalMin[0]) );

    return minimunMin;
    
}
int main(){
    vector<string> timePoints ={"00:00","23:59"};
    int result = findMinDifference(timePoints);
    cout << "Minimun minute is :"<<result <<endl;
    return 0;
}