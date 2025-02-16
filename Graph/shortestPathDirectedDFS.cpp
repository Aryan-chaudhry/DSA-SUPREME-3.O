#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    unordered_map<int, list<pair<int,int>>>adjList;

    void addEdge(int u, int v, int wt, bool direction){
        // direction 0 -> undirected
        // 1 --> directed

        if(direction == 0){
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u,wt});
        }
        else{
            adjList[u].push_back({v,wt});
        }
    }



    void topoSortDfs(int src, unordered_map<int,bool>&vis, stack<int>&ans){
        vis[src] = true;

        for(auto nbr : adjList[src]){
            if(!vis[nbr.first]){
                topoSortDfs(nbr.first, vis, ans);
            }
        }
        ans.push(src);
    }

    void shortestPathdfs(int src){
        stack<int>topoOrder;
        unordered_map<int,bool>visited;
        topoSortDfs(src, visited, topoOrder);

        int n = topoOrder.size();
        vector<int>dist(n, INT_MAX);
        src = topoOrder.top();
        topoOrder.pop();

        dist[src] = 0;

        for(auto nbr : adjList[src]){

            int node = nbr.first;
            int weightDistance = nbr.second;

            if( (dist[src] + weightDistance) < dist[node]){
                dist[node] = dist[src] + weightDistance;
            }
        }

        // main logic

        while(!topoOrder.empty()){
                int frontNode = topoOrder.top();
                topoOrder.pop();

                for(auto nbr : adjList[frontNode]){
                    int node = nbr.first;
                int weightDistance = nbr.second;

                if( (dist[frontNode] + weightDistance) < dist[node]){
                    dist[node] = dist[frontNode] + weightDistance;
                }
            }
        }

        cout << "Prinitng Distnace Array : " << endl;

        for(auto i : dist){
            cout << i << " ";
        }
        cout << endl;


    }
    
};


int main(){
    Graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(2,3,0);
    // g.addEdge(2,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(5,3,0);

    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(4,3,6,1);
    g.addEdge(1,2,7,1);
    g.addEdge(3,2,2,1);
    
    int src = 0;
    g.shortestPathdfs(src);

    return 0;
}