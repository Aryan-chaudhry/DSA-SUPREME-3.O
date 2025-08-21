#include<bits/stdc++.h>
using namespace std;

int bruteForce(int arr[], int size, int k){
    sort(arr, arr+size);
    return arr[k-1];

    // time complexity  : O(nlogn)
    // space complexity : O(1)
}

int optimized(int arr[], int size, int k){
    // create min heap

    priority_queue<int, vector<int>, greater<int>>pq; // min heap

    // insert all element in min heap

    for(int i=0; i<size; i++){
        int element = arr[i];
        pq.push(element);
    }

    int remove = k-1;
    while(remove--){
        pq.pop();
    }

    return pq.top(); // this is the kth element which is at the top of min heap

    // time ciomplexity  : O(n)
    // space complexity  : O(n)
}

int superOptimized(int arr[], int size, int k){
    // max heap
    priority_queue<int>pq;

    // insert first k element in it
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    for(int i=k; i<size; i++){
        // mujhe mn element chahaye to me largest element kyu dalu, me smallest dalunga
        int element = arr[i];

        if(element < pq.top()){
            pq.pop();
            pq.push(element);

            // order is importat first pop than insert
        }
    }
    return pq.top();

    // time complexity  : O(n)
    // space complexity : O(k)
}

int main(){
    int arr[] = {10,5,1,4,6,3,2,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    // method 1

    // int ans = bruteForce(arr, size, k);
    // cout << k <<"th smallest element is : " << ans << endl;

    // method 2

    // int ans = optimized(arr, size, k);
    // cout << k <<"th smallest element using optimized approach is : " << ans << endl;

    // method 3

    int ans = superOptimized(arr, size, k);
    cout << k << "th smallest element using super optimized approach is : " << ans << endl;

    return 0;
}