// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


/* Problem Statement :

Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.


Example 1:

Input:
          
0 - 1 - 2 - 3>

Output: 1
Explanation: 3 -> 3 is a cycle

Example 2:

Input:
0 - 1 - 2

Output: 0
Explanation: no cycle in the graph

Your task:
You don’t need to read input or print anything. Your task is to complete the function isCyclic() which takes the integer V denoting the number of vertices and adjacency list as 
input parameters and returns a boolean value denoting if the given directed graph contains a cycle or not.


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)


Constraints:
1 ≤ V, E ≤ 105

*/


Cpp code :

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool dfs(vector<int> adj[], vector<bool> &vis, vector<bool> &dfs_vis, int prnt, int node)
	{
	    vis[node] = true;
	    dfs_vis[node] = true;
	    
	    int sz = adj[node].size();
	    
	    for(auto ver : adj[node])
	    {
	        if(!vis[ver])
	      {
	          if(dfs(adj, vis, dfs_vis, node, ver))
	          return true;
	      }
	        else if(dfs_vis[ver])
	        return true;
	    }
	     
	    dfs_vis[node] = false;
	    
	    return false;
	}
	
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool> vis(V, false);
	   	vector<bool> dfs_vis(V, false);
        
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i])
	   	    {
    	   	    if(dfs(adj, vis, dfs_vis, -1, i))
    	   	    return true;
	   	    }
	   	}
	   	
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
