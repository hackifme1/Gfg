// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


/* Problem Statement :

The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions 
are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For eg below 
figure represents a chessboard [3 1 4 2].


Example 1:

Input:
1

Output:
[1]

Explaination:
Only one queen can be placed 
in the single cell available.


Example 2:

Input:
4

Output:
[2 4 1 3 ] [3 1 4 2 ]

Explaination:
These are the 2 possible solutions.
 

Your Task:
You do not need to read input or print anything. Your task is to complete the function nQueen() which takes n as input parameter and returns a list containing all the possible

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    unordered_map<int,int> d,rd;
public:
  void solve(vector<vector<int>> &ans,int n,int row,vector<bool> c,vector<int> vec)
  {
      if(row==n)
      {
          ans.push_back(vec);
          return;
      }
      
      for(int i=0;i<n;i++)
      {
          if(c[i]==false&&d[row+i]==0&&rd[row-i+n-1]==0)
          {
              vec.push_back(i+1);
              c[i]=true;
              d[row+i]=1;
              rd[row-i+n-1]=1;
              solve(ans,n,row+1,c,vec);
              vec.pop_back();
              c[i]=false;
              d[row+i]=0;
              rd[row-i+n-1]=0;
          }
      }
  }
  
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> res;
        vector<bool> col(n,false);
      
        solve(res,n,0,col,{});
      
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Endschessboard configurations in sorted order. Return an empty list if no solution exists.

 

Expected Time Complexity: O(n!)
Expected Auxiliary Space: O(n2) 

 

Constraints:
1 ≤ n ≤ 10 

*/


Cpp code :


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    unordered_map<int,int> d,rd;
public:
  void solve(vector<vector<int>> &ans,int n,int row,vector<bool> c,vector<int> vec)
  {
      if(row==n)
      {
          ans.push_back(vec);
          return;
      }
      
      for(int i=0;i<n;i++)
      {
          if(c[i]==false&&d[row+i]==0&&rd[row-i+n-1]==0)
          {
              vec.push_back(i+1);
              c[i]=true;
              d[row+i]=1;
              rd[row-i+n-1]=1;
              solve(ans,n,row+1,c,vec);
              vec.pop_back();
              c[i]=false;
              d[row+i]=0;
              rd[row-i+n-1]=0;
          }
      }
  }
  
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> res;
        vector<bool> col(n,false);
      
        solve(res,n,0,col,{});
      
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends
