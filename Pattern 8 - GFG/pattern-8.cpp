//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int star=2*n-1;
	    int spc=0;
	    for(int i=1;i<=n;i++)
	    {
	        for(int k=0;k<spc;k++)cout<<" ";
	        for(int j=1;j<=star;j++) cout<<"*";
	        
	        star=star-2;
	        spc++;
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends