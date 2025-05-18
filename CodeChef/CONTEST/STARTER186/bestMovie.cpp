#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[][2], int rows, int cols)
{
    int cost = INT_MAX;
    bool foundValidMovie = false;
    for (int i = 0; i < rows; i++)
    {

        if (arr[i][0] >= 7)
        {
            foundValidMovie = true;
            if (arr[i][1] < cost)
            {
                cost = arr[i][1];
            }
        }
    }

    return foundValidMovie ? cost : -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;      // number of movies
        int arr[n][2]; // n rows, 2 columns
        // Input
        int rows = n;
        int cols = 2;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
        int result = minCost(arr, rows, cols);
        cout << result << endl;
    }
    return 0;
}