//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        
        if(n <= 1)
            return;
        
        int k = 0;
        
        while(k < n){
            if(a[k] == 0)
                break;
            else
                k++;
        }
        
        int i = k, j = k+1;
        
        while(i < n && j < n){
            if(a[j] != 0){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
            }
            j++;
        }
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];

		Solution ob;

        vector<int> v(a, a+n);

        ob.moveZeroes(v);

        for(int i=0; i<n; i++)
            cout <<  v[i] << " ";
	}
    
    return 0;
    
}

// } Driver Code Ends
