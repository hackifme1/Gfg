// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
  bool comp(Item i1,Item i2)
    {
        double pk1=(double)i1.value/(double)i1.weight;
        double pk2=(double)i2.value/(double)i2.weight;
        return(pk1>pk2);
    }
// function to return fractionalweights
class Solution
{
    public:
  
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double cw=0,rw=W,ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=rw)
            {
                rw=rw-arr[i].weight;
                ans=ans+arr[i].value;
            }
            else
            {
                ans=ans+((double)rw/(double)arr[i].weight)*arr[i].value;
                break;
            }
        }
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
