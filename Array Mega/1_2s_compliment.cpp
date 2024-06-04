#include<iostream>
#include<vector>
using namespace std;

void find1Compliment(vector<int>&binary){
    for(int i=0; i<binary.size(); i++){
        if(binary[i]==1){
            binary[i]=0;
        }
        else if(binary[i]==0){
            binary[i]=1;
        }
    }
    
}

void find2Complement(vector<int>&binary){
    // step1 --> find 1's complement
    for(int i=0; i<binary.size(); i++){
        if(binary[i] == 1){
            binary[i] = 0;
        }
        else if(binary[i] == 0){
            binary[i] = 1;
        }
    }
    // now add 1 to 1complement  2complement = 1complement + 1
    int carry = 1;
    for(int i=binary.size()-1; i>=0; i--){
        int sum = binary[i]+carry;
        binary[i] = sum%2;
        carry = sum/2;
    }

}

void print(vector<int>binary){
    for(int i=0; i<binary.size(); i++){
        cout << binary[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int>binary =  {0,1,0,1,1,0};
    //find1Compliment(binary);
    print(binary);
    find2Complement(binary);
    print(binary);

    return 0;
}