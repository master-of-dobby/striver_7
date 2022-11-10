//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int c  = 0;
        if(m == 1 || n == 1){
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++){
                    c++;
                    if(c == k)
                        return a[i][j];
                }
                    
            
        }
        
        
        
        int top = 0,left=0,right=m-1,bottom=n-1;
        // Your code goes here
        int val=0;
        while((left <= right) && (top <= bottom)){

		for(int i = left; i <= right; i++){
		    //cout << a[top][i] << " ";
		    c++;
		    if(c == k)
		        val = a[top][i];
		}
			
		top++;

		for(int i = top; i <= bottom; i++){
		 	//cout << a[i][right] << " ";
		 	c++;
		 	if(c == k)
		 	    val = a[i][right];
		 	
		}
		
		right--;

		if(left <= right){
			for(int i = right; i >= left; i--){
				//cout << a[bottom][i] << " ";
				c++;
		 	    if(c == k)
		 	        val = a[bottom][i];
			}
			
			bottom--;
		}

		if(top <= bottom){
			for(int i = bottom; i >= top; i--){
			 	//cout << a[i][left] << " ";
			 	c++;
			 	if(c == k)
			 	    val = a[i][left];
			}
			
			left++;
		}
	}
	
	return val;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends