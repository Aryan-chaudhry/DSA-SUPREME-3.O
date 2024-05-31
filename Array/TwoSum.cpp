#include<iostream>
using namespace std;

pair<int , int> twoSum(int arr[]  , int size , int target){
    pair<int , int>ans = make_pair(-1,-1);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}


int main(){

    int arr[] = {10,5,20,15,30};
    int size = 5;
    int target = 300;

    // pair<int , int>ans = twoSum(arr , size , target);
    // if(ans.first  == -1 && ans.second == -1){
    //     cout << "Pair not found" << endl;
    // }
    // else{
    //     cout << "Pair found" << endl;
    //     cout << ans.first << ", " << ans.second << endl;
    // }

    return 0;
}