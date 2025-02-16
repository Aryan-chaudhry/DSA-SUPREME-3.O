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

    void Dijkastra(int src, int n){
        vector<int>dist(n+1, INT_MAX);
        set<pair<int,int>>st;  // <distance, node>


        dist[src] = 0;
        st.insert({0,src});

        while(!st.empty()){
            auto topElement = *(st.begin());
            int topNodeDistance = topElement.first;
            int topNode = topElement.second;

            // pop this node
            st.erase(st.begin());

            // go to neighbour node

            for(auto nbr : adjList[topNode]){
                // nbr is a pair

                /*
                nbr = pair<a,b>
                a = node
                b = wt
                 */

                // curr node distance
                int nbrNode = nbr.first;
                int  nbrDistance = nbr.second;
                if(dist[topNode] + nbrDistance < dist[nbrNode]){
                    // 2 kam karne hai 
                    // distance array ko update karna hai
                    // set ko update karna hai

                    // set me direct update nahi kar sakte 
                    // old entry ko find karo use delete karo or new entry dalo

                    auto result = st.find({dist[nbrNode], nbrNode});
                    if(result != st.end()){
                        // entry found
                        st.erase(result);
                    }
                    dist[nbrNode] = dist[topNode] + nbrDistance;
                    st.insert({dist[nbrNode], nbrNode});
                }
            }
        }

    cout << "Printing dijkastras Algorithm" << endl;

    for(int i=0; i<n; i++){
        cout << dist[i] << " ";
    }

    }


};


int main(){
    Graph g;

    g.addEdges(0,5,9,0);
    g.addEdges(0,3,6,0);
    g.addEdges(5,4,2,0);
    g.addEdges(4,3,11,0);
    g.addEdges(5,1,14,0);
    g.addEdges(4,1,9,0);
    g.addEdges(4,2,10,0);
    g.addEdges(3,2,15,0);
    g.addEdges(2,1,7,0);
   

    g.Dijkastra(0,6);
         
}