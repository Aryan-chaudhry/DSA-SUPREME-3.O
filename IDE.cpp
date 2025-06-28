#include<bits/stdc++.h>
using namespace std;


// implement heap
class Heap{
    public:

    int *arr;
    int capacity;
    int size; // just act like an index --> 1 based indexng followed here

    Heap(int capacity){
        this -> capacity = capacity;
        arr = new int[capacity];
        this -> size = 0;
    }

    void insert(int val){
        // check karlo ki heap overflow to nahi hai
        if(size == capacity){
            cout << "overFlow!" << endl;
        }
        // step 1 -->  follow 1 based indexing here
        size++; // 0 --> 1
        // fetch index
        int index = size;

        // step 2 -->  insert value at this index in array
        arr[index] = val;

        // step 3 --> perform heapification
        while(index > 1){
            int parent = index/2;
            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{
                break;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    Heap h(5);

    h.insert(10);
    h.print();

    cout << endl;

    h.insert(20);
    h.print();

    cout << endl;

    h.insert(40);
    h.print();


}
