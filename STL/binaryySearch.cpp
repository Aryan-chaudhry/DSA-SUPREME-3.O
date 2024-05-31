#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = 9;
    int target = 980;
    
    bool ans = binary_search(arr, arr+size, target );
    cout << ans << endl;

    return 0;
}