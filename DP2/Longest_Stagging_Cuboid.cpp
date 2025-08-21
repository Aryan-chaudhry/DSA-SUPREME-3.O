#include<bits/stdc++.h>
using namespace std;

bool isSafeToPlace(vector<int>&c1, vector<int>&c2){
    if(c1[0] <= c2[0] && c1[1] <= c2[1] && c1[2] <= c2[2]) return true;
    return false;
}

int Recursion(vector<vector<int>>&cuboids, int prev, int curr){
    // base case
    if(curr >= cuboids.size()) return 0;

    int include = 0;
    if(prev == -1 || isSafeToPlace(cuboids[prev], cuboids[curr])){
        include = cuboids[curr][2] + Recursion(cuboids, curr, curr+1);
    }
    int exclude = 0 + Recursion(cuboids, prev, curr+1);
    return max(include,exclude);
}

int main(){
    vector<vector<int>> cuboids = {{50,45,20},
                                {95,37,53},
                                {45,23,12}};

    for(auto &cuboid : cuboids){
        sort(cuboid.begin(), cuboid.end());
    }

    sort(cuboids.begin(), cuboids.end());

    int prev = -1;
    int curr = 0;

    int ans = Recursion(cuboids, prev, curr);
    cout << ans << endl;
}