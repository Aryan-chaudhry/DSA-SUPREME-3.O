 #include<iostream>
 using namespace std;

 bool search2DArray(int arr[][4] , int rowsize , int colsize , int target){
    
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
 }

 int main(){

    int arr[3][4] = {
                    {10,20,30,40},
                    {50,60,70,80},
                    {90,100,110,120}
                    };

    int rowsize = 3;
    int colsize = 4;
    int target = 404;

    bool ans = search2DArray(arr ,rowsize , colsize , target );

    cout << "ans is : " << ans << endl;


    return 0;
 }