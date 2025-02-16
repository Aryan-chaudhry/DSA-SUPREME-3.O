#include<iostream>
#include<unordered_map>
#include<list>
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

    void dfsHelper(int src, unordered_map<int,bool>&visited){
        visited[src] = true;
        cout << src << ", ";


        for(auto nbr : adjList[src]){
        // nbr --> pair
        // 1st --> node
        //2nd --> weight
            int node = nbr.first;
            if(!visited[node]){
                dfsHelper(node, visited);
            }
        }
    }

    void dfsTraversal(int n){
        int src = 0;
        unordered_map<int,bool>visited;

        for(int src=0; src<n; src++){
            if(!visited[src]){
                dfsHelper(src, visited);
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
    int n = 4;
    g.printAdjList(n);
    cout << endl;
    cout << "DFS Traveral : ";
    g.dfsTraversal(n);
    return 0;
}

