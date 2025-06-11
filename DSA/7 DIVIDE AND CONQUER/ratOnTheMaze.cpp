#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][4],int rows,int cols , int newX , int newY , vector<vector<bool>>&visited){
    //check x and y boundry
    //check path close or open
    //check visited or not
    if(newX>=0 && newX<cols &&
    newY>=0 && newY<rows &&
    maze[newX][newY]==1 &&
    visited[newX][newY]==false){
        return true;
    }else {
        return false;
    }
}

void printAllPossiblePath(int maze[][4],int rows ,int cols , int srcX , int srcY , string& output,vector<vector<bool>>visited ){
//base case
if(srcX==cols-1 && srcY==rows-1){
    cout<<output<<endl;
    return;
}

//up recursive call
int newX=srcX-1;
int newY=srcY;
if(isSafe(maze,rows,cols,newX,newY,visited)){
//mark visited
visited[newX][newY]=true;
//recursive call
output.push_back('U');
printAllPossiblePath(maze,rows,cols,newX,newY,output,visited);

//backtract
output.pop_back();
visited[newX][newY]=false;

}


//down recursive call
newX=srcX+1;
newY=srcY;
if(isSafe(maze,rows,cols,newX,newY,visited)){
//mark visited
visited[newX][newY]=true;
//recursive call
output.push_back('D');
printAllPossiblePath(maze,rows,cols,newX,newY,output,visited);

//backtract
output.pop_back();
visited[newX][newY]=false;

}


//left recursive call
newX=srcX;
newY=srcY-1;
if(isSafe(maze,rows,cols,newX,newY,visited)){
//mark visited
visited[newX][newY]=true;
//recursive call
output.push_back('L');
printAllPossiblePath(maze,rows,cols,newX,newY,output,visited);

//backtract
output.pop_back();
visited[newX][newY]=false;

}


//right recursive call
newX=srcX;
newY=srcY+1;
if(isSafe(maze,rows,cols,newX,newY,visited)){
//mark visited
visited[newX][newY]=true;
//recursive call
output.push_back('R');
printAllPossiblePath(maze,rows,cols,newX,newY,output,visited);

//backtract
output.pop_back();
visited[newX][newY]=false;

}


}

int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int rows=4;
    int cols=4;
    //source position
    int srcX=0;
    int srcY=0;

    //output
    string output="";

    //2d vector
    vector<vector<bool>>visited(rows,vector<bool>(cols ,false));
    if(maze[0][0]==0){
        cout << "No path existed !" <<endl;
    }else{
        printAllPossiblePath(maze,rows,cols,srcX,srcY,output,visited);
    }
    return 0;
}