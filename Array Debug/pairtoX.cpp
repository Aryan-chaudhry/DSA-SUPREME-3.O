#include<iostream>
using namespace std;

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	// debug --> initialize j with i+1 
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x){
				cout << input[i] << " " << input[j] << endl;
				pairs++;
			}
		}
	}
	return pairs;
}

int main(){
    int x = 6;
    int size = 6;
    int input[] = {2, 8, 10, 5, -2, 5};
    cout << pairSumToX(input, size, x) << endl;
    return 0;
}