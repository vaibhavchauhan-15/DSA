#include <iostream>
#include <vector>
using namespace std;

void twoPointer(vector<int> arr)
{   cout<<"Two Pointer Approach";
    int start = 0;
    int i = 0;
    int end = arr.size() - 1;
    while (i < end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    for (int value : arr)
    {
        cout << value << " ";
    }
}

void countApproach(vector<int> arr)
{
    cout<<"Count Approach"<<endl;
    int coutnt0=0;
    int coutnt1=0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i]==0){
            coutnt0++;
        }else{
            coutnt1++;
        }  
    }
    cout<<"Zero is:"<<coutnt0<<"and One is:"<<coutnt1<<endl;
    int index=0;
    while (coutnt0--)
    {
        arr[index]=0;
        index++;
    }
    while (coutnt1--)
    {
        arr[index]=1;
        index++;
    }
    for(auto ans :arr){
        cout<<ans<<" ";
    }
    
}
int main()
{
    vector<int> arr{1, 0, 1, 0, 0, 1, 0, 1, 0};
    // twoPointer(arr);
    countApproach(arr);

    return 0;
}
