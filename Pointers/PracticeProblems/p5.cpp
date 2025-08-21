#include "headerFile.cpp"

int main(){
    int a = 7;
    int *c = &a;
    c = c+1;
    cout << a << " " << *c << endl;
}