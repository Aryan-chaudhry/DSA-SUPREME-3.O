#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    // 1st int --> u
    // 2nd int --> v
    // 3rd int --> wt

    unordered_map<int, list<pair<int,int> > >adjList;

    void addEdge(int u, int v, int weight, bool direction){
        // direction --> 0 --> undirected
        // direction --> 1 --> directed

        if(direction==0){
            adjList[u].push_back({v,weight});
            adjList[v].push_back({u,weight});
        }
        else{
            adjList[u].push_back({v,weight});
        }
    }

    void printAdjList(int n){

        for(int i=0; i<n; i++){
            cout << i << ": ";
            cout << "{ ";
            list<pair<int,int>>temp = adjList[i];
            for(auto j : temp){
                // j is a pair here
                cout << "(" << j.first << "," << j.second << "), ";
            }
            cout << "}" << endl;
        }

    }

    void bfsTraversal(int src){
        queue<int>q;
        unordered_map<int,bool>visited;

        // initial state maintain 
        q.push(src);

        visited[src] = true;

    while(!q.empty()){
        int frontNode = q.front();
        cout << frontNode << ", ";
        q.pop();

        for(auto neighbour : adjList[frontNode]){
            // neighbour --> pair
            // first --> node
            // second --> weight
            int node = neighbour.first;
            int weight = neighbour.second;

            if(!visited[node]){
                q.push(node);
                visited[node] = true;
            }
        }
    }
    }
};

int main(){
    Graph g;
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
    int n = 7;
    g.printAdjList(n);
    cout << endl;
    cout << "BFS : "; 
    g.bfsTraversal(0);
    return 0;
}

