//PAIR SUM OF TWO ARRAY
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{1,5,4,7,8,2,3};
   //pairs
   cout<<"here the pairs are:"<<endl;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<brr.size();j++){
          cout<<"("<<element<<","<<brr[j]<<")"<<endl;
        }
    }
    //SUM PAIRS
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<brr.size();j++){
          //sum of pairs
           if(element+brr[j]==9){
            cout<<"sum pairs";
              cout<<"("<<element<<","<<brr[j]<<")"<<endl;
           }
        }
    }
return 0;
}






//USER DEFINE PAIR SUM OF TWO ARRAY
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int size1, size2, sum;

    // Taking input for the first array
    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter the elements of the first array: ";
    vector<int> arr(size1);
    for (int i = 0; i < size1; i++) {
        cin >> arr[i];
    }

    // Taking input for the second array
    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter the elements of the second array: ";
    vector<int> brr(size2);
    for (int i = 0; i < size2; i++) {
        cin >> brr[i];
    }

    // Taking input for sum
    cout << "Enter the sum value: ";
    cin >> sum;

    // Pairs
    cout << "Pairs are :" << endl;
    for (int i = 0; i < size1; i++) {
        int element = arr[i];
        for (int j = 0; j < size2; j++) {
            cout << "(" << element << "," << brr[j] << ")" << endl;
        }
    }

    // Printing sum pairs
    cout << "Sum pairs:" << endl;
    for (int i = 0; i < size1; i++) {
        int element = arr[i];
        for (int j = 0; j < size2; j++) {
            // Sum of pairs
            if (element + brr[j] == sum) {
                cout << "(" << element << "," << brr[j] << ")" << endl;
            }
        }
    }

    return 0;
}
