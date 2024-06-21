#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>arr(5,vector<int>(4,0));
    /*2D array created with 5 rows and 4 col with  
    initial value 0 */
    int totalrow = arr.size();
    int totalcol = arr[0].size(); 
    // creating jaged array
    vector<vector<int>>brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int totalrowcount = brr.size();
    // int totalcolumn = brr[i].size()
}

