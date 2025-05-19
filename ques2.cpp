 #include <bits/stdc++.h>
using namespace std;

vector<vector<int>> constructadj(int V, vector<vector<int>> &edges){
     vector<vector<int>> adj(V);
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    return adj;
}
 
bool isBipartite(int V, vector<vector<int>> &edges) { 
    vector<int> color(V, -1);
    vector<vector<int>> adj = constructadj(V,edges);
    queue<int> q; 
    for(int i = 0; i < V; i++) {
 
        if(color[i] == -1) {
             color[i] = 0;
            q.push(i);
                while(!q.empty()) {
                int u = q.front();
                q.pop();
                 for(auto &v : adj[u]) {
                    if(color[v] == -1) {
                        color[v] = 1 - color[u];
                        q.push(v);
                    }

                     
                    else if(color[v] == color[u]) {
                        return false;
                    }
                }
            }
        }
    }
    
     
    return true;
}

int main() {
    int V = 4;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 3}};
    if(isBipartite(V, edges))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}
