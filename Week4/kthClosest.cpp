#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int bs(vector<int>&vehicle, int st, int end, int target){
    while(st <= end){
        int mid = st + (end - st)/2;

        if(vehicle[mid] == target){
            return mid;
        }
        else if(target > vehicle[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int getyourindex(vector<int>&vehicle, int &yourvehicle){
    
    if(vehicle[0] == yourvehicle){
        return 0;
    }
    
        int i=1;
        while(vehicle[i] <= yourvehicle){
            i *= 2;
        }
        int size = vehicle.size();
        int mini = min(i, size-1);
        int ans = bs(vehicle, i/2, mini, yourvehicle);
    
    return ans;
}

int main(){
    vector<int>vehicle;
    int frindvehicle = 5;
    int yourvehicle = 3;

    for(int i=1; i<5; i+=2){
        vehicle.push_back(i);
    } 

   

    int ans = getyourindex(vehicle, yourvehicle);
    cout << "your index : " << ans << endl;

}