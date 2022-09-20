//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    
    public:
    vector<long long> res;
    //Function to return list containing first n fibonacci numbers.

    vector<long long> printFibb(int n) 
    {
        //code here
        
        res.push_back(1);
        if(n == 1)
            return res;
        
        res.push_back(1);
    
        if(n == 2)
            return res;
            
        n = n-2;

        long long a=1, b=1, c=0;
        while(n--){
            c = a + b;
            res.push_back(c);
            a = b;
            b = c;
        }
        return res;
    }

};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends
