#include <bits/stdc++.h>
using namespace std;

int findUniqueElement(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // single element
        if (start == end)
            return start;
        int mid = start + (end - start) / 2;
        if (mid % 2 == 0) // mid element is even
        {
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
            {
                // go right
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else // mid element is odd
        {
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {
                start = mid + 1; // go right
            }
            else
            {
                end = mid - 1; // go left
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 2, 5, 5, 7, 7, 1, 1, 10, 10, 11, 11, 3, 3, 9};
    int ans = findUniqueElement(arr);
    if (ans != -1)
    {
        cout << "Unique Element Is :" << arr[ans] << endl;
    }
    else
        cout << "Not Found" << endl;
    return 0;
}