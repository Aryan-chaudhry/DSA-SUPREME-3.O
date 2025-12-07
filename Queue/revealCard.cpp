#include<bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int>&deck){
    // sort the array
    sort(deck.begin(), deck.end());
    queue<int>q;
    vector<int>ans(deck.size());

    // put indices of answer into queue

    for(int i=0; i<ans.size(); i++){
        q.push(i);
    }

    // reverse simulation + filling using sorted deck
    for(int i=0; i<deck.size(); i++){
        // first step --> reveal
        ans[q.front()] = deck[i];
        q.pop();

        // second step --> push front to bottom
        if(!q.empty()){
            q.push(q.front());
            q.pop();
        }
    }
    return ans;
}


int main(){
    vector<int>nums = {17, 13, 11, 2, 3, 5, 7};

    vector<int>ans = deckRevealedIncreasing(nums);

    for(auto no : ans){
        cout << no << " ";
    }
}