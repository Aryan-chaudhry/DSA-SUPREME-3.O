#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "bacbacbb";
    
      s.erase(s.begin()+0);
      cout << s << endl;
      s.erase(s.begin()+5);
      cout << s << endl;
}