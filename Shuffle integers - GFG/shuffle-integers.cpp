//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	vector<int> v;
	void shuffle(int i, int j, int arr[], int n){
	    if(j==n){
	        return;
	    }
	    v.push_back(arr[i]);
	    v.push_back(arr[j]);
	    shuffle(i+1, j+1, arr, n);
	}
	void shuffleArray(int arr[],int n)
	{
	    shuffle(0, n/2, arr, n);
	    for(int j=0; j<n; j++){
	        arr[j]=v[j];
	    }
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends