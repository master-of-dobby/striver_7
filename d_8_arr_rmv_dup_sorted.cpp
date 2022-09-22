//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int c=0;
        //vector<int> v;
        
        for(int i=0; i<n; i++){
            if(a[i] == a[i+1])
                c++;
            else
                a[i-c] = a[i];
            
        }
        
        /*for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
        
        cout << endl;
        
        
        for(int i=0; i<v.size(); i++)
            a[v[i]] = 0;
        
        /*for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
        
        
        for(int i=0; i<n-c; i++){
            if(a[i] == 0){
                //for(int k = i; k<n-1; k++)
                //    a[k] = a[k+1];
                c++;
                //i--;
            }

        }*/
        
        //cout << n << " " << c << endl;

        return n-c;
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
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
