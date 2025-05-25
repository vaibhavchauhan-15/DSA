// 3561. Resulting String After Adjacent Removals

#include <bits/stdc++.h>
using namespace std;

bool adjecent(char a , char b ){
    return abs(a-b)== 1 || (a=='a' && b=='z') || ( a=='z' && b=='a');
}
string resultingString(string s)
{
    int i = 0;
    int n = s.size();
    while (i < n -1 )
    {
        
        // cout<<a<<" = " <<next<<endl;
        if (adjecent(s[i] , s[i+1]))
        {
            s.erase(i, 2);
            if(i>0){

                i--;//recheck
            }
        }else{

            i++;
        }
    }
    return s;
}
int main()
{
    string s = "adcb";
    string result = resultingString(s);
    cout << "Final String is :" << result << endl;
    return 0;
}