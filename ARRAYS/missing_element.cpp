#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>& arr, int start, int end) {
    if(start > end)
        return end + 1;
    if(start != arr[start])
        return start;
    int mid = (start + end) / 2;
    if(arr[mid] == mid)
        return findMissing(arr, mid+1, end);
    return findMissing(arr, start, mid);
}

int main(){
  vector<int>arr {0,1,3,4,5,6,7,8}; // Subtract 1 from each element
  int n=arr.size();
  int missing = findMissing(arr, 0, n-1);
  cout << "Missing element is: " << missing  << endl; // Add 1 to adjust for the earlier subtraction
  return 0;
}
