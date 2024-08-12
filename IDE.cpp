#include<iostream>
#include<algorithm>
using namespace std;


int main(){
 
 int arr[] = {1,2,0,2,1,0};
 int zeroCount=0, oneCount = 0, twoCount = 0;

 for(int i=0; i<6; i++){
  if(arr[i] == 0){
    zeroCount++;
  }
  else if(arr[i] == 1){
    oneCount++;
  }
  else{
    twoCount++;
  }
 }

 

fill(arr,arr+zeroCount, 0);
fill(arr+oneCount, (arr+(zeroCount+oneCount)), 1);
fill(arr+zeroCount+oneCount ,arr+zeroCount+oneCount+twoCount, 2);

for(int i=0; i<6; i++){
  cout << arr[i] << " ";
}
  

}