//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int a[], int n , int x )
{
    // code here
    vector<int> res;
    
    
    /*int low = 0;
    int high = n-1;
    
    while(low <= high){
        int mid = (low + high)/2;
        
        if(a[mid] == x){
            res.push_back(mid);
            low = mid+1;
        }
            
            
        else if(a[mid] > x)
            high = mid-1;
        else
            low = mid+1;*/
    int c=0;
    
    for(int i=0; i<n; i++){
        if(a[i] == x && c == 0){
             res.push_back(i);
             c++;
        }
        
        if((a[i] != x) && (a[i-1] == x)){
            res.push_back(i-1);
            c++;
        }
        
         if(a[i] == x && i == n-1){
              res.push_back(i);
              c++;
         }
               
            
          

    }
    
    if(c == 0){
        res.push_back(-1);
        res.push_back(-1);
    }
       
    return res;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends