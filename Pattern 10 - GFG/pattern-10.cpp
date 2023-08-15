//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        int star=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=star;j++)cout<<"* ";
            cout<<endl;
            star++;
        }
        star=n-1;
        for(int i=1;i<n;i++)
        {
            for(int k=1;k<=star;k++)cout<<"* ";
            cout<<endl;
            star--;
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