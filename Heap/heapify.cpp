
#include<iostream>
using namespace std;

class heap{
    public:
    
    int *arr;
    int size;
    int capacity;

    heap(int capacity){
        this -> arr = new int[capacity];
        this -> size = 0;
        this -> capacity = capacity;
    }

    void insert(int val){

    // step 1 --> place value at vacant position

        if(size == capacity){
            cout << "Heap overflow" << endl;
        }
            size++;
            int index = size;
            arr[index] = val;
        

        // Take the value to its correct position

        while(index > 1){
            int parentIndex = index/2;

            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }

    int deletion(){
        int answer = arr[1];
        // replacement karo
        arr[1] = arr[size];
        // last node ko delete karo uski original position se
        size--;

        // heapification
        int index = 1;

        while(index < size){
            
            int leftchild = 2*index;
            int righchild = 2*index + 1;

            // find out karo sabse bada kon
            int largestIndex = index;

            if(leftchild <= size && arr[largestIndex] < arr[leftchild]){
              largestIndex = leftchild; 
            }
            if(righchild <= size && arr[largestIndex] < arr[righchild]){
                largestIndex = righchild;
            }

            if(index == largestIndex){
                break;
            }
            else{
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return answer;
    }

    void printHeap(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};

void heapify(int *arr, int n, int index){
    // left child 
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestIndex = index;

    // teno me se maximum find karo
    if(largestIndex < n && arr[leftIndex] > arr[largestIndex]){
        largestIndex = leftIndex;
    }
    if(largestIndex < n && arr[rightIndex] > arr[largestIndex]){
        largestIndex = rightIndex;
    }
    // after these 2 condition largest will be pointed towards largest element among 3
    if(index != largestIndex){
        swap(arr[index], arr[largestIndex]);
    }
    // ek case solve ho chuka hai ab recursion solve kar lega
    index = largestIndex;
    heapify(arr, n, index);
}

void buildHeap(int arr[], int n){
        for(int i=n/2; i>0; i--){
            heapify(arr, n, i);
        }
    }

 void heapsort(int arr[], int n){
        while(n != 1){
            // it is 1 based indexing so dont make mistakes here
            swap(arr[1], arr[n]);
            n--;
            // heapify
            heapify(arr, n, 1);
        }
    }

int main(){
    cout << "hi";

    int arr[] = {-1, 5, 10, 15, 20, 15, 7, 9};

    buildHeap(arr, 7);

    cout << "Printing heap : " << endl;
    for(int i=1; i<=7; i++){
        cout << arr[i] << " ";
    }

    heapsort(arr, 7);

    cout << "Printing heap : " << endl;
    for(int i=1; i<=7; i++){
        cout << arr[i] << " ";
    }

    // heap h(20);

    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // h.printHeap();

    // int answer = h.deletion();
    // cout << "Deleted value is : " << answer << endl;
    // h.printHeap();



    

//     h.printHeap();
 }