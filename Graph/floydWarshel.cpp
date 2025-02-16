#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    unordered_map<int, list<pair<int,int>>>adjList;

    void addEdges(int u, int v, int wt, bool direction){
        if(direction == 0){
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u,wt});
        }
        else{
            adjList[u].push_back({v,wt});
        }
    }


    void floydWarshel(int n){
        vector<vector<int>>dist(n, vector<int>(n, 1e9));

        // step1 diagonal par 0 rako
        for(int i=0; i<n; i++){
            dist[i][i] = 0;
        }

        // copy all distance from graph to matrix

        for(auto a : adjList){
            for(auto b : a.second){
                int u = a.first;
                int v = b.first;
                int wt = b.second;
                dist[u][v] = wt;
            }
        }

        for(int helper = 0; helper<n; helper++){
            for(int src=0; src<n; src++){
                for(int dest=0; dest<n; dest++){
                    dist[src][dest] = min(dist[src][dest], dist[src][helper]+dist[helper][dest]);
                }
            }
        }

        cout << "Priniting flowd warshel algorithm" << endl;
        for(int i=0; i<dist.size(); i++){
            for(int j=0; j<dist[0].size(); j++){
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
    }

    void printAdj(){
        for(auto i : adjList){
            cout << i.first << " : { ";
                for(auto j : i.second){
                    cout << j.first << " " << j.second << endl;
                }
                cout << endl;
            }
        }




};


int main(){
    Graph g;

    g.addEdges(0,2,-2,1);
    g.addEdges(1,0,4,1);
    g.addEdges(1,2,3,1);
    g.addEdges(3,2,5,1);
    g.addEdges(3,1,-1,1);
    g.addEdges(2,3,2,1);
   
   g.floydWarshel(4);
   

    
    return 0; 
}

/*
    Time Complexity O(v*E)
    Space Complexity O(v)
*/