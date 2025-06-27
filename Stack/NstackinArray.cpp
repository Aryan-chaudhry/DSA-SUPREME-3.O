#include<bits/stdc++.h>
using namespace std;

class Nstack{
    int *a, *top, *next;
    int n; // no of stack
    int size; // size of main array
    int freeSpot; // tells free space in main array

    public:
    Nstack(int _n, int _s) : n(_n), size(_s){
        freeSpot = 0;
        a = new  int[size];
        top = new int[n];
        next = new int[size];

        for(int i=0; i<n; i++){
            top[i] = -1;
        }

        for(int i=0; i<size; i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
    }

    // push s into mth stack
    bool push(int x, int m){
        // check ctack over flow
        if(freeSpot == -1){
            return false;
        }

        // find index;
        int index = freeSpot;

        // update freeSpot
        freeSpot = next[index];

        // insert element
        a[index] = x;

        // update next
        next[index] = top[m-1];
        
        // update top
        top[m-1] = index;

        return true; // push successful
    }

    // pop from mth stack
    int pop(int m){
        // check stack underflow
        if(top[m-1] == -1){
            return false;
        }

        int index = top[m-1];
        top[m-1] = next[index];
        int popedElement = a[index];
        next[index] = freeSpot;
        freeSpot = index;
        
        return popedElement;
    }

    ~Nstack(){
        delete[]a;
        delete[]top;
        delete[]next;
    }
};

int main(){
    Nstack s(3,6);
    cout << s.push(10,1) << endl;
    cout << s.pop(1) << endl;
    return 0;
}