#include<iostream>
#include<vector>
using namespace std;

bool search2DArray(vector<vector<int>>arr , int target){
    int rowsize = arr.size();
    int colsize = arr[0].size();

    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>>arr(4 , vector<int>(3,0));
    int rowsize = arr.size();
    int colsize = arr[0].size();

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cin >> arr[i][j];
        }
    }

    int target = 40;
    
    bool ans = search2DArray(arr , target);
    cout << "ans : " <<ans << endl;
    return 0;
}