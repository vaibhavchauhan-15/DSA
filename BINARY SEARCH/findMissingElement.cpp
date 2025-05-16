#include <bits/stdc++.h>
using namespace std;

int findMissingElementIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // int mid=(start+end)/2;//over flow
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            // ans=mid;
            start = mid + 1; // go right
        }
        else if (diff == 2)
        {
            // go left
            ans = mid;
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int findMissingElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // int mid=(start+end)/2;//over flow
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            // ans=mid;
            start = mid + 1; // go right
        }
        else if (diff == 2)
        {
            // go left
            ans = arr[mid] - 1;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2,  4, 5, 6, 7, 8, 9};
    int idx = findMissingElementIndex(arr);
    int val = findMissingElement(arr);
    if (idx == -1)
    {
        cout << "No Missing Element !!!" << endl;
    }
    else
    {
        cout << "Missing element index before: " << idx << endl;
        cout << "Missing element value: " << val << endl;
    }
    return 0;
}