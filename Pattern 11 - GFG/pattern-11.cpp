//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int p=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)p=0;
            else p=1;
            for(int j=1;j<=i;j++)
            {
                if(p==1)p=0;
                else p=1;
                cout<<p<<" ";
            }
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