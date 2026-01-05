#include<bits/stdc++.h>

using namespace std;

bool dfs(int i, vector<vector<int>>&adj, vector<bool> &vis, int parent){
    
    vis[i] = true;
    
    for(auto j: adj[i]){
        if(!vis[j]){
            if(dfs(j, adj, vis, i)) return true;
        }
        else if(parent!=j) return true;
    }
    
    return false;
}

// using DFS
bool cycleDFS(int node, vector<vector<int>> &arr){
    vector<vector<int>> adj(node);
    
    for(auto &i: arr){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    
    vector<bool> vis(node, false);
    
    for(int i=0; i<node; i++){
        if(vis[i]) continue;
        
        if(dfs(i, adj, vis, -1)) return true;
    }
    
    return false;
}

// using BFS
bool cycleBFS(int node, vector<vector<int>> &arr){
    vector<vector<int>> adj(node);

    for(auto i: arr){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    
    vector<int> parent(node, -1);
    vector<bool> vis(node, false);
    
    for(int i=0; i<node; i++){
        if(vis[i]) continue;
        
        queue<int> q;
        q.push(i);
        vis[i] = true;
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            
            for(auto j: adj[x]){
                if(!vis[j]){
                    q.push(j);
                    parent[j] = x;
                    vis[j] = true;
                }
                else if(parent[x]!=j){
                    return true;
                }
            }
        }
    }
    
    return false;
}

int main(){
    cout<<1<<endl;
    return 0;
}


// g++-15 cycle-detection.cpp -o cycle-detection -std=c++17 && ./cycle-detection