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

    void dfs(int src, unordered_map<int,bool>&visited, unordered_map<int,list<int>>&adjNew){
        visited[src] = true;
        cout << src << "  ";

        for(auto nbr : adjNew[src]){
            if(!visited[nbr]){
                dfs(nbr, visited, adjNew);
            }
        }
    }

    void topoSortdfs(stack<int>&s, int node, unordered_map<int,bool>&visited){
        visited[node] = true;

        for(auto nbr:adj[node]){
            if(!visited[nbr]){
                topoSortdfs(s, nbr, visited);
            }
        }
        // backtrack
        s.push(node);
    }

    int countSCC(int n){
        // step 1  find topoordering
        stack<int>s;
        unordered_map<int,bool>visited;
    
        for(int i=0; i<n; i++){
            if(!visited[i]){
                topoSortdfs(s, i, visited);
            }
        }

        // step2 reverse all edges (to virtually disconnect we reverse it)
        unordered_map<int,list<int>>adjNew;

        for(auto i : adj){
            for(auto j : i.second){
                int u = i.first;
                int v = j;
                // u -> v edge hai use reverse karna
                // v-> edge banado
                adjNew[v].push_back(u);
            }
        }

        // step 3 traversal and count like no of island
        unordered_map<int,bool>vis;
        int count = 0;

        while(!s.empty()){
            int src = s.top();
            s.pop();

            // call dfs 
            if(!vis[src]){
                cout << "SSC ";
                dfs(src, vis, adjNew);
                // ek pura component traverse ho chuka hai like no of island
                cout << endl;
                count++;
            }
        }
        return count;
    }
};

int main(){
    graph g;
    g.addEdge(0,3,1);
    g.addEdge(3,2,1);
    g.addEdge(2,1,1);
    g.addEdge(1,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(6,7,1);

    int n = 8;
    g.printAdjList(n);

    int count = g.countSCC(n);
    cout << "Number of Strongly connected Component : " << count << endl;

   
}

/*
    Time Complexity  O(V+E)
    Space Complexity O(V) 
*/