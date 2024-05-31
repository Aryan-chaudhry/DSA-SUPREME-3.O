#include<iostream>
using namespace std;

int main(){

    float English , Hindi , Maths , Science , Ip;

    cout << "Enter your English Marks : ";
    cin >> English;


    cout << "Enter your Hindi Marks : ";
    cin >> Hindi;

    cout << "Enter your Maths Marks : ";
    cin >> Maths;

    cout << "Enter your Science Marks : ";
    cin >> Science;

    cout << "Enter your Ip marks : ";
    cin >> Ip;

    float Percentage = ((English + Hindi + Maths + Science + Ip)/500 )* 100;

    cout << "Your Percentage is : " << Percentage << endl;

    return 0;
}