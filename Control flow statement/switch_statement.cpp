#include<iostream>
using namespace std;

int main(){

    char grade;
    cout << "Enter your grade " << endl;
    cin >> grade;

    

    // if(grade == 'A'){
    //     cout << "90 Above" << endl;
    // }
    // else if(grade == 'B'){
    //     cout << "80 Above" << endl;
    // }
    // else if(grade == 'C'){
    //     cout << "70 Above" << endl;
    // }
    // else if(grade == 'D'){
    //     cout << "60 Above" << endl;
    // }
    // else{
    //     cout << "Less than 60" << endl;
    // }

    switch(grade){
        case 'A':cout << "90 Above" << endl;
        break;
        case 'B':cout << "80 Above" << endl;
        break;
        case 'C':cout << "70 Above" << endl;
        break;
        case 'D':cout << "60 Above" << endl;
        break;
        default:cout << "Less than 60" << endl;
    }

    
}