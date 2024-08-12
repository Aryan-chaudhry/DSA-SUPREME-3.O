#include<iostream>
using namespace std;

float findArea(int radious){
    return 3.14*radious*radious;
}

int main(){
    int radious;
    cout << "Enter Radious : ";
    cin >> radious;

    float Area = findArea(radious);
    cout << "Area of circle is : " << Area << endl;

    return 0;
}