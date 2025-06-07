#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long int>&trees, long long int requirements,
long long int mid){

    long long int sum = 0;

    for(int i=0; i<trees.size()-1; i++){
        if(trees[i] > mid){
            sum += trees[i] - mid;
        }
    }
    return (sum >= requirements) ;
}

long long int minWood(vector<long long int>&trees, long long int requirements){ 

    long long int st = 0;
    long long int end = *max_element(trees.begin(), trees.end());
    long long int ans = -1;

    while(st <= end){

        long long int mid = st + ((end - st)>>1);

        if(isPossible(trees, requirements, mid)){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){

    vector<long long int>trees = {20, 15, 10, 17};
    long long int requirements = 7;
    long long int ans = minWood(trees, requirements);
    cout << "Min wood for requirements : " << ans << endl;

    return 0;
}