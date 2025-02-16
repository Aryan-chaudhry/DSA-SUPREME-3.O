int Memoisation(int n, int k, vector<int>&dp){
//     // base case 
//     if(n == 1){
//         return k;
//     }

//     if(n == 2){
//         return k + (k*(k-1));
//     }

//     int ans = (k-1) * (Memoisation(n-1, k, dp) + Memoisation(n-2, k, dp));
//     return ans;
// }