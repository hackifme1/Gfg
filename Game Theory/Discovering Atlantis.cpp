// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


/* Problem Statement :

Jack and Jelly are on the ship en route to discover Atlantis. The distance between their starting point and the city of Atlantis is N kilometers. They take turns manning the 
ship and each of them can steer the ship for 1, 2 or 4 kilometers in one turn. This should never exceed the remaining distance.
If Jelly starts as the captain-incharge of the ship, find who will be incharge of the ship when they reach Atlantis.


Example 1:

Input: N = 2
Output: JELLY

Explaination: Jelly can cover 2 Km 
in his first turn itself.

Example 2:

Input: N = 3
Output: JACK

Explaination: On his first turn Jelly can 
cover either 1 or 2km. In either case, Jack 
will cover the remaining distance in his turn.
 

Your Task:
You do not need to read input or print anything. Your task is to complete the function captain() which takes the N as input parameter and returns a string ("JACK" or "JELLY")
denoting the name of the final captain.

 
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

 
Constraints:
1 ≤ N ≤ 10^7

*/


Cpp code :

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string captain(int N){
        // code here
        if(N % 3 == 0)
        return "JACK";
        else
        return "JELLY";
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.captain(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
