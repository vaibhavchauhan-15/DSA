#include <iostream>
using namespace std;

string checkPassFail(int marks) {
    if (marks < 0 || marks > 100) {
        return "Invalid Input";
    } else if (marks >= 40) {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main() {
    cout<<"enter test case :";
    int t;cin>>t;
    while (t--)
    {
        int marks;
        cout << "Enter marks (0-100): ";
        cin >> marks;
    
        string result = checkPassFail(marks);
        cout << "Result: " << result << endl;
        
    }
    

    return 0;
}
