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

    void printAdj(){
        for(auto i : adjList){
            cout << i.first << " : { ";
                for(auto j : i.second){
                    cout << j.first << " " << j.second << endl;
                }
                cout << endl;
            }
        }

   void bellmanFord(int src, int n){
    vector<int>dist(n, 1e9);
    // maintaine inittail state
    dist[src] = 0;

    // perform Relaxation step for n-1 time

    for(int i=0; i<n; i++){
        for(auto a : adjList){
            for(auto b : a.second){
                /* 
                    // a -> <int> list<pair<int,int>>
                    a.first -> u
                    // a.second -> nbr of u node -> list<pair<int,nt>>
                    b --> pair<int,int>a
                    b.first --> v 
                    b.second --> wt
                 */
                int u = a.first;
                int v = b.first;
                int wt = b.second;

                if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                    dist[v] = dist[u]+wt;
                }

            }
        }
    }


    bool negativeCyclePresent = false;

    for(auto a : adjList){
            for(auto b : a.second){
                /* 
                    // a -> <int> list<pair<int,int>>
                    a.first -> u
                    // a.second -> nbr of u node -> list<pair<int,nt>>
                    b --> pair<int,int>a
                    b.first --> v 
                    b.second --> wt
                 */
                int u = a.first;
                int v = b.first;
                int wt = b.second;

                if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                    dist[v] = dist[u]+wt;
                    negativeCyclePresent = true;
                    break;
                }

            }
        }

        if(negativeCyclePresent == true){
            cout << "negativeCycle is Present" << endl;
        }
        else{
            cout << "negativeCycle is Absent" << endl;
        }

    for(int i=0; i<n; i++){
        cout << dist[i] << " ";
    }
    cout << endl;
   }


};


int main(){
    Graph g;

    g.addEdges(0,1,-1,1);
    g.addEdges(1,4,2,1);
    g.addEdges(0,2,4,1);
    g.addEdges(3,2,5,1);
    g.addEdges(4,3,-3,1);
    g.addEdges(1,2,3,1);
    g.addEdges(1,3,2,1);
    g.addEdges(3,1,1,1);
   
   

    g.bellmanFord(0,5);
    return 0; 
}

/*
    Time Complexity O(v*E)
    Space Complexity O(v)
*/