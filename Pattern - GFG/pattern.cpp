//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        int spc=n-1;
        int star=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=spc;j++) cout<<" ";
            for(int k=1;k<=star;k++)cout<<"* ";
            star++;
            spc--;
            cout<<endl;
        }
        spc=0;
        star=n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=spc;j++) cout<<" ";
            for(int k=1;k<=star;k++)cout<<"* ";
            star--;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends