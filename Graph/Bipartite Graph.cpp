// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


/* Problem Statement :

Given an adjacency list of a graph adj  of V no. of vertices having 0 based index. Check whether the graph is bipartite or not.
 

Example 1:

Input: 
  0
 / 
 1
  \
   2
   
Output: 1

Explanation: The given graph can be colored 
in two colors so, it is a bipartite graph.


Example 2:

Input:
  0
 /  \
 2 - 3
      \
      1
      
Output: 0

Explanation: The given graph cannot be colored 
in two colors such that color of adjacent 
vertices differs. 
 

Your Task:
You don't need to read or print anything. Your task is to complete the function isBipartite() which takes V denoting no. of vertices and adj denoting adjacency list of graph 
and returns a boolean value true if graph is bipartite otherwise returns false.
 

Expected Time Complexity: O(V)
Expected Space Complexity: O(V)

Constraints:
1 ≤ V, E ≤ 105

*/


Cpp code :

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfs(vector<int> adj[], vector<bool> &vis, int prnt, int node)
    {
        queue<pair<int,int>> que;
        map<int,int> mp;
        que.push(make_pair(node, prnt));
        mp[node] = prnt;
        
        while(!que.empty())
        {
            pair<int,int> frnt = que.front();
            vis[frnt.first] = true;

            que.pop();
            
            for(auto ver : adj[frnt.first])
            {
                if(!vis[ver])
                {
                    que.push(make_pair(ver, -frnt.second));
                    mp[ver] = -frnt.second;
                }
                else if(frnt.second + mp[ver] != 0)
                    return false;
            }
        }
        
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<bool> vis(V, false);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(!bfs(adj, vis, 1, i))
	            return false;
	        }
	    }
	    
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int> adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
