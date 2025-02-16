#include<iostream>
using namespace std;

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
    // debug initialize j with i+1 and k with j+1
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x){
                    cout << input[i] << " " << input[j] << " " << input[k] << endl;
                    triplets++;
                } 
			}
		}
	}
	return triplets;
}

int main(){
    int size = 5;
    int input[] = {1,2,3,4,5};
    int x = 9;

    cout << tripletSumToX(input,size,x) << endl;

    return 0;
}