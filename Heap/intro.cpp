
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

    void buildheap(int arr[], int n){

    }

    
};

int main(){
    heap h(20);

    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    h.printHeap();
    int answer = h.deletion();
    cout << "Deleted value is : " << answer << endl;  
    h.printHeap();

 
}