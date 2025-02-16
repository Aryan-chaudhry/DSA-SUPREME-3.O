#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>>adjList;

    void addEdge(int u, int v, bool direction){
        // direction --> 0 --> undirected
        // direction --> 1 --> directed

        if(direction==0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }
    }

    void printAdjList(int n){

        for(int i=0; i<n; i++){
            cout << i << ": ";
            cout << "{ ";
            list<int>temp = adjList[i];
            for(auto j : temp){
                cout << j << ", ";
            }
            cout << "}" << endl;
        }

    }

    bool checkCyccleDfs(int node, unordered_map<int,bool>&vis, unordered_map<int, bool>&dfsTracker){
        vis[node] = true;
        dfsTracker[node] = true;
        
        for(auto nbr: adjList[node]) {
            if(!vis[nbr]) {
                bool ans = checkCyccleDfs(nbr, vis, dfsTracker);
                if(ans == true) {
                    return true;
                }
            }
            else if(vis[nbr] == true && dfsTracker[nbr] == true) {
                //cycle present
                return true;
            }
        }
        
        //backtrack
        dfsTracker[node] = false;
        return false;
    }

};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,0,0);
    int n = 4;
    g.printAdjList(n);

    unordered_map<int,bool> vis;
    unordered_map<int,bool> dfsTracker;
    bool ans = false;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                ans = g.checkCyccleDfs(i,vis, dfsTracker);
                if(ans == true) {
                    break;
                }
            }
        }

    if(ans == true){
        cout << "Cycle Found " << endl;
    }
    else{
        cout << "Cycle not found " << endl;
    }


    return 0;
}


    