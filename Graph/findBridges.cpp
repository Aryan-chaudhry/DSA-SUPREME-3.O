#include<bits/stdc++.h>
using namespace std;

class graph{
    public:

    unordered_map<int, list<int>>adj;


    void addEdge(int u, int v, bool direction){
        if(direction){
            adj[u].push_back(v);
        }
        else{
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void printAdjList(int n){
        for(int i=0; i<n; i++){
            cout << i << " : { ";
            for(auto nbr : adj[i]){
                cout << nbr << ", ";
            }
            cout << "}" << endl;
        }
    }

    
    void countBridges(int src, int parent,  vector<int>&tin, vector<int>&low, unordered_map<int,bool>&vis, int timer){
        timer++;
        vis[src] = true;
        tin[src] = timer;
        low[src] = timer;

        // neighbour par traverl karte hain
        for(auto nbr : adj[src]){
            // undirected graph hai to neighbour me parent bhe ho sakta hai
            if(nbr == parent){
                // vapis parent par pouch gya --> ignore karo
                continue;
            }
            else if(!vis[nbr]){
                // normal traversal karo and check for bridges
                countBridges(nbr, src, tin, low, vis, timer);
                // check for bridges 
                // update if possible

                // ye me bhul jata hu
                low[src] = min(low[src], low[nbr]);
                if(low[nbr] > tin[src]){
                    // bridge exist
                    cout << "Bridge Found" << endl;
                    cout << nbr << "-" << src << endl;
                }

            }
            else{
                // already visited and not parent
                // low time ko update kardo if possible
                low[src] = min(low[src], low[nbr]);
            }
        }
    }
    
    
};

int main(){
    graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,1);


    int n = 5;
    g.printAdjList(n);

    int timer = 0;
    int src = 0;
    int parent = -1;
    vector<int>tin(n);
    vector<int>low(n);
    unordered_map<int,bool>vis;
    g.countBridges(src, parent, tin, low, vis, timer);

}

