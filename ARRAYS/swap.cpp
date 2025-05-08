#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int n)
{
    for

    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }

    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << " ";
    }
}

int main()
{
    int arr[] = {1, 5, 4, 7, 8, 2, 54, 89, 5, 2, 46, 546, 4};
    int n = 13;
    reverseArray(arr, n);
    return 0;
}