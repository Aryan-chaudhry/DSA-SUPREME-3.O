#include "headerFile.cpp"


int main(){
    float f = 10.5;
    float p = 2.5;
    float*ptr = &f;

    (*ptr)++; // --> f --> 11.5
    *ptr = p; // --> f --> 2.5;

    cout << *ptr << " " << f << " " << p << endl;
}