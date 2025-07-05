#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
class Solution {
public:

    int solve(vector<vector<char>>& matrix,int i,int j , int rows , int cols , int& maxi){
        //base case
        if(i>=rows || j>=cols){//out of bound
            return 0;
        }

        //operaion and recursive call
        //right
        int right = solve(matrix,i,j +1,rows,cols,maxi);
        //diagonal
        int diagonal = solve(matrix,i+1,j+1,rows,cols,maxi);
        //down
        int down =solve(matrix,i+1,j,rows,cols,maxi);


        if(matrix[i][j]=='1'){//currecnt position 1 hai
            int ans =1 +  min(right , min(diagonal , down ));
            maxi=max(ans,maxi);
            return ans;
        }else{
            return 0;// agaar currenct elemetn 0 hai to 0 return karo
        }
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int i=0;
        int j=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int maxi=0;
        solve(matrix,i,j,rows,cols,maxi);
        return maxi*maxi;
    }
};
int main(){
    vector<vector<char>> matrix = {
    {'1', '0', '1', '0', '0'},
    {'1', '0', '1', '1', '1'},
    {'1', '1', '1', '1', '1'},
    {'1', '0', '0', '1', '0'}
    };

    Solution sc;
    cout << "Maximum Sqaure of size :"<<sc.maximalSquare(matrix) <<endl;
    return 0;
}