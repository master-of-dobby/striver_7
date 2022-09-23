//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
        vector<int> find_union(int a[], int b[], int m, int n){

            map<int, int> k;

            vector<int> u;

            for(int i=0; i<m; i++)
                k[a[i]]++;

            for(int i=0; i<n; i++)
                k[b[i]]++;
            
            for(auto &it : k)
                u.push_back(it.first);
            
            return u;

        }

        vector<int> find_union1(int a[], int b[], int m, int n){

            set<int> s;

            vector<int> v;

            for(int i=0; i<m; i++)
                s.insert(a[i]);
            
            for(int i=0; i<n; i++)
                s.insert(b[i]);

            for(auto it : s)
                v.push_back(it);
            
            return v;

        }

        vector < int > find_union2(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}


        /*vector<int> find_union2(int a[], int b[], int m, int n){
    
            int i = 0, j = 0;

            vector<int> v;

            while(i < m && j < n){
                if(a[i] <= b[j]){
                    if(v.size() == 0 || v.back() != a[i])
                        v.push_back(a[i]);
                    i++;
                }
                else{
                    if(v.size() == 0 || v.back() != b[j])
                        v.push_back(b[j]);
                    j++;
                }
            }

            while(i < n){
                if(v.back() != a[i])
                    v.push_back(a[i]);
                i++;
            }

            while(j < m){
                if(v.back() != b[j])
                    v.push_back(b[j]);
                j++;
            }

            return v;
        }*/

};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	/*int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];*/

		Solution ob;

        vector<int> v;

        int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int b[] = {2, 3, 4, 4, 5, 11, 12};

        
        //v = ob.find_union(a, b, 10, 7);
        //v = ob.find_union1(a, b, 10, 7);
        v = ob.find_union2(a, b, 10, 7);


        for(int i=0; i<v.size(); i++)
            cout <<  v[i] << " ";
	
    
    return 0;
    
}

// } Driver Code Ends
