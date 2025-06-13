#include<bits/stdc++.h>
using namespace std;

// bool checkRow(vector<vector<int>>&arr, int row){

//     for(int col=0; col<arr[row].size(); col++){
//         if(arr[row][col] == 1){
//             return false;
//         }
//     }
//     return true;
// }

// bool checkCol(vector<vector<int>>&arr, int col){
//     for(int row=0; row<arr.size(); row++){
//         if( (col != row && arr[row][col] == 0) || (col == row && arr[row][col] == 1) ){
//             return false;
//         } 
//     }
//     return true;
// }

// int findCelebrity_bruteForce(vector<vector<int>>&arr){
    
//     int ans = -1;
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr[i].size(); j++){
//             if(checkRow(arr, i) && checkCol(arr, j)){
//                 ans = i;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

bool knows(int A, int B, vector<vector<int>>&arr){
    if(arr[A][B] == 1) return true;
    return false;
}

bool checkRow(vector<vector<int>>&arr, int candidate){
    for(int col = 0; col < arr.size(); col++){
        if(col == candidate) continue;  // Skip self
        if(arr[candidate][col] != 0) return false;
    }
    return true;
}

bool checkCol(vector<vector<int>>&arr, int candidate){
    for(int row = 0; row < arr.size(); row++){
        if(row == candidate) continue;  // Skip self
        if(arr[row][candidate] != 1) return false;
    }
    return true;
}

int optimized(vector<vector<int>>&arr){
    stack<int>st;

    for(int i=0; i<arr.size(); i++){
        st.push(i);
    }

    while(st.size() >= 2){
        int A = st.top(); st.pop();
        int B = st.top(); st.pop();

        if(knows(A,B, arr)){
            st.push(B);
        }
        else{
            st.push(A);
        }
    }

    int candidate = st.top();
    st.pop();

    bool rowcheck = checkRow(arr, candidate);
    bool colcheck = checkCol(arr, candidate);

    if(rowcheck && colcheck) return candidate;
    else return -1;
}

int main(){
    vector<vector<int>>arr = {{0,1,0},
                            {0,0,0},
                            {0,1,0}};

    // int ans = findCelebrity_bruteForce(arr);
    // cout << ans << endl;

    int ans2 = optimized(arr);
    cout << ans2 << endl;

}