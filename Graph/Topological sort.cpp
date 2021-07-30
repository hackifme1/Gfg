// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


/* Problem Statement :

Given a Directed Graph with V vertices and E edges, Find any Topological Sorting of that Graph.


Example 1:

Input:
1 -> 0 <- 3
     ^
     |
     2

Output:
1

Explanation:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 3, 2, 1, 0.


Example 2:

Input:
5 ->  0  <-  4  ->  1  <-  3  <-  2
\   (directed edge from 5 to 2)   /
 ---------------------------------

Output:
1
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function topoSort()  which takes the integer V denoting the number of vertices and adjacency list as
input parameters and returns an array consisting of a the vertices in Topological order. As there are multiple Topological orders possible, you may return any of them.


Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).


Constraints:
2 ≤ V ≤ 104
1 ≤ E ≤ (N*(N-1))/2

*/


Cpp code :

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	
	void dfs_varn(vector<int> adj[], vector<bool> &vis, stack<int> &stck, int node)
	{
	    vis[node] = true;

	    for(auto ver : adj[node])
	    {
	        if(!vis[ver])
	        {
	            dfs_varn(adj, vis, stck, ver);
	        }
	    }
	    
	    stck.push(node);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool> vis(V, false);
	    stack<int> stck;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs_varn(adj, vis, stck, i);
	        }
	    }
	    
	    vector<int> res;
	    
	    while(!stck.empty())
	    {
	        res.push_back(stck.top());
	        stck.pop();
	    }
	    
	    return res;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends
