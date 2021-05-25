// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int assignMiceHoles(int N , int M[] , int H[]) {
        // code here
        sort(M,M+N);
        sort(H,H+N);
        int maxm=0,i;
        for( i=0;i<N;i++)
        {
            //int diff=abs(H[i]-M[i]);
            maxm=max(abs(H[i]-M[i]),maxm);
        }
        return maxm;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        
        int M[N],H[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>M[i];
        for(int i=0 ; i<N ; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.assignMiceHoles(N,M,H) << endl;
    }
    return 0;
}  // } Driver Code Ends
