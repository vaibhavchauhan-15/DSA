
// #include <bits/stdc++.h>
// using namespace std;

// int countPrimes(int n)
// {
//     if (n == 0) return 0;
//     int ans = 0;
//     // 0 ------ n-1 and marks as true
//     vector<bool> prime(n, true);
//     prime[0] = prime[1] = false;
//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             ans++;
//             // start from 2 which is prime number and mark as false multiple of 2
//             // then next 3 is also prime num and mark as false multiple of 3 and so on up to n-1
//             // remaining true are prime number
//             int j = 2 * i;
//             while (j < n)
//             {
//                 prime[j] = false;
//                 j = j + i;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     cout << "Enter number :";
//     int n;
//     cin >> n;
//     cout << "Total prime number is :" << countPrimes(n) << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void seive(int n){
    if(n<=1){
        cout << "Prime number are : 0"<<endl;
        return;
    }
    vector<bool>prime(n ,true);
    prime[0]=prime[1]=false;
    for (int i = 2; i <= sqrt(n); i++) {//use i< root(n) 
        if(prime[i]==true){
            int j=i*i;//change to i*i
            //first unmarked number would be i*i , as other have been marked by 2 to (i-1)
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
    }
    cout << "Prime number are :";
    int count=0;
    for (int i = 0; i < n; i++) {
        if(prime[i]){
            count++;
            cout<<i<<" ";
        }
    }
    cout << "" <<endl;
    cout << "Total Prime Number from 0 to "<<n<<" is :"<<count <<endl;
}
int main(){
    cout << "Enter Number :";
    int n;cin>>n;
    seive(n);
    return 0;
}