#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompFor1index(vector<int>&a, vector<int>&b){
    return a[1]<b[1]; // increasing order
}

int main(){
    
    vector<vector<int>>arr = {{1,44}, {0,55}, {0,22}, 
                                {0,11}, {2,33} };

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }     
    cout << endl;

    // sorted by 0th index of vector of vector
    sort(arr.begin(), arr.end());


     for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    cout << endl;

    // sort by first index of vector
    sort(arr.begin(), arr.end(), myCompFor1index);

     for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    cout << endl;


}

