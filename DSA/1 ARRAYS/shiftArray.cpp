#include <bits/stdc++.h>
using namespace std;

void shiftKTime(int crr[], int n, int k)
{
    cout << "Original string " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << crr[i] << " ";
    }
    while (k--)
    {
        cout << endl;
        int temp = crr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            crr[i] = crr[i - 1];
        }
        crr[0] = temp;
    }
    cout << "Shift To Right " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << crr[i] << " ";
    }
}
int main()
{
    // int arr[] = {10, 2, 3, 0, 40, 50, 60};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // cout << "Original string " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // int temp = arr[n - 1];
    // for (int i = n - 1; i > 0; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = temp;
    // cout << "Shift To Right " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // int brr[] = {10, 2, 3, 0, 40, 50, 60};
    // int temp2 = brr[0];
    // for (int i = 0; i < n - 1; i++)
    // {
    //     brr[i] = brr[i + 1];
    // }
    // brr[n - 1] = temp2;
    // cout << "Shift To Left " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    // shift k times
    int k = 2;
    int crr[] = {20, 30, 40, 50, 60};
    int m = sizeof(crr) / sizeof(crr[0]);
    shiftKTime(crr, m, k);

    return 0;
}