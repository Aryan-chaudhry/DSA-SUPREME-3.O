#include<bits/stdc++.h>
using namespace std;

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
        // debug 1 --> replace input[nextZero] with input[i]
		if(input[nextZero] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            // debug 2 --> increment nextZero
            nextZero++;
		}
	}
}

int main(){
    int size = 5;
    int input[] = {0,1,0,1,0};

    sort0sand1s(input,size);

    return 0;
}