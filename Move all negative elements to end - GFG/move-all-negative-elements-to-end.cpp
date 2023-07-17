//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int tmp[n];
        int count=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]>=0)count++;
        }
        for(int e=0;e<n;e++)
        {
            if(arr[e]<0)
            {
                tmp[count]=arr[e];
                count++;
            }
            else
            {
                tmp[j]=arr[e];
                j++;
            }
        }
        for(int k=0;k<n;k++)arr[k]=tmp[k];
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends