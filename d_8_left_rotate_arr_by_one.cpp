//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    /*void solve(int a[], int n){

        if(n<=1)
            return;
        
        int k = a[0];

        for(int i=0; i<n-1; i++)
            a[i] = a[i+1];
        
        a[n-1] = k;
        
    }*/

    void solve(int a[], int n){

        if(n <= 1)
            return;

        int temp[n];

        for(int i=0; i<n-1; i++)
            temp[i] = a[i+1];
        
        temp[n-1] = a[0];

        for(int i=0; i<n; i++)
            cout << temp[i] << " ";

        cout << endl;

        copy(temp, temp+n, a);
    }
};



//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    ob.solve(a,N);

    for(int i=0;i<N;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
