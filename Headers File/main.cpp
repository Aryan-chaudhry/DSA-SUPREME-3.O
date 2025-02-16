#include<iostream>
#include "algorithm.h";
using namespace std;

// steps cpp --> .o --> .exe  (exe made by linker)
// g++ -o is used to make .exe from .os
// g++ -c is used to make .os from .cpp

int main() {
    int arr[] = {2,5,4,1,6,7};
    SORTME(arr, 6);
    return 0;
}