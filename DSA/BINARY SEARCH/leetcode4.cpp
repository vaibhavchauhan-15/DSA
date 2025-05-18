// 74. Search a 2D Matrix
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int n = rows * cols;

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / cols;//********************* **/
        int colIndex = mid % cols;//2d too one d Conversion
        int currNum=matrix[rowIndex][colIndex];//remember it
        if (currNum == target)
            return true;
        if(currNum<target){
            //go right
            start=mid+1;
        }else end=mid-1;    

    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};
    int target = 1;
    int result = searchMatrix(matrix, target);
    if(result==true){
        cout << "Hurayyyyy!!!!! Target Found" <<endl;
    }else cout << " Oh No !  Target Not Found" <<endl;
    return 0;
}