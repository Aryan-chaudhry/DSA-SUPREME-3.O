#include<iostream>
using namespace std;

pair<int,int > pairSum(int arr[] , int size , int target){

    // make pair 
    pair<int,int>psum = make_pair(-1,-1);

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == target){
                psum.first = arr[i];
                psum.second = arr[j];
                break;
            }
        }
    }
    return psum;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    int target = 50;

   pair<int,int> ans =  pairSum(arr ,size , target);
   
   if(ans.first != -1 && ans.second != -1){
    cout << "Pair found " << endl;
    cout << ans.first << " " << ans.second << endl;
   }
   else{
    cout << "Pair not found " << endl;
   }
 
    return 0;
}