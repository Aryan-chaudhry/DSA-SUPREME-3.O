#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    unordered_map<int, list<int>>adjList;

    void addEdge(int u, int v, bool direction){
        // direction 0 -> undirected
        // 1 --> directed

        if(direction == 0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }
    }

        void print(int n){
            for(int i=0; i<n; i++){
                cout << i << " { ";
                for(auto j : adjList[i]){
                    cout << j << ", ";
                }
                cout << " }" << endl;
            }
        }

        void shortestPath(int src, int dest){
            unordered_map<int, bool>visited;
            unordered_map<int,int>Parent;
            queue<int>q;

            q.push(src);
            visited[src] = true;
            Parent[src] = -1;

            while(!q.empty()){
                int frontNode = q.front();
                q.pop();

                for(auto nbr:adjList[frontNode]){
                    if(!visited[nbr]){
                        q.push(nbr);
                        visited[nbr] = true;
                        Parent[nbr] = frontNode;
                    }
                }
            }

            // parent Array Ready

            vector<int>path;

            int node = dest;
            while(node != -1){
                path.push_back(node);
                node = Parent[node];
            }


            reverse(path.begin(), path.end());

            for(auto i : path){
                cout << i << " -> ";
            }
           cout  << endl;
        }
    
};


int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.addEdge(5,3,0);
    
    int src = 0;
    int dest = 3;
    g.shortestPath(src, dest);

    return 0;
}