// 74. Search a 2D Matrix
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // int row=
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    int result = searchMatrix(matrix, target);
    if (result == true)
    {
        cout << "True" << endl;
    }
    else
    {

        cout << "False" << endl;
    }
    return 0;
}