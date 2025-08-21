#include "headerFile.cpp"

int main(){
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;
}