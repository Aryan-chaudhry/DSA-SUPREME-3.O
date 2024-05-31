#include<iostream>
using namespace std;

namespace Family{

    void Introduce(){

        cout << "Hello how can i help you " << endl;
        string issue;
        cout << "Please Specify you  issue " << endl;
        getline(cin,issue);
        cout << "Your issue will be resolve soon " << endl;

        cout << "Issue : " << issue << endl;

    }

}

int main(){

  Family::Introduce();
    
    
}