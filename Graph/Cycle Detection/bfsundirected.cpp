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

    bool cycleDetectionundirectedbfs(int src, unordered_map<int,bool>&visited){
        queue<int>q;
        unordered_map<int,int>parent;

        // maintain initial state

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        // main logic
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr : adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }

                else if(visited[nbr] == true && nbr != parent[frontNode]){
                    // cycle present 
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(3,4,0);
    g.addEdge(2,1,0);
    int n = 4;
    g.printAdjList(n);

    bool ans = false;
    unordered_map<int,bool>visited;
    for(int i=0; i<n; i++){
        if(!visited[i]){
             ans = g.cycleDetectionundirectedbfs(i, visited);
            if(ans == true){
                break;
            }
        }
    }

    if(ans == true){
        cout << "Cycle Found" << endl;
    }
    else{
        cout << "Cycle Not Found" << endl;
    }
    return 0;
}

