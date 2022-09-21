//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* TIME LIMIT EXCEEDED!
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        vector<int> v;
        long long sum=0;
        for(int i=0; i<n; i++){
            sum = 0;
            for(int j=i; j<n; j++){
                sum += a[j];
                if(sum == s){
                        v.push_back(i+1);
                        v.push_back(j+1);
                        return v;
                }
                    
            }
        }

        return v;
    }
}; 
*/

/*

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        vector<int> v;
        long long sum=0;
        int k=0;
        int i=0;

        X:
        i = k;

        for(i; i<n; i++){
            sum += a[i];

            if(sum >= s){
                v.push_back(i+1);
                k = i;
                break;
            }
        }

        sum = 0;

        for(i=k; i>=0; i--){
            sum += a[i];

            if(sum == s){
                v.push_back(i+1);
                reverse(v.begin(), v.end());
                return v;
            }
        }

        if(k)
            goto X;
        
        v.push_back(-1);
        return v;
    }

  
};

*/

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s){

        vector<int> res;

        long long sum = a[0], k=0;

        for(int i=1; i<=n; i++){

            while(sum > s && k < i - 1){
                sum = sum - a[k];
                k++;
            }

            if(sum == s){
                res.push_back(k);
                res.push_back(i-1);
                return res;
            }


            if(i < n)
                sum += a[i];
        }

        res.push_back(-1);

        return res;

    }

    
};



//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
