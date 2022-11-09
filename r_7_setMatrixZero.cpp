//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        //int m = a.size();
        //int n = a[0].size();
        /*vector<int> row;
        vector<int> col;
        int c=0,sum=0;
        map<int, int> mp;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 0){
                    
                    mp[i] = j;
                    
                }
            }
        }
        auto it = mp.begin();
        
        //for(it = mp.begin(); it != mp.end(); it++)
          //  cout << it->first << " " << it->second << endl;
        
         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                sum = 0;
                if(((i == it->first) && (j == it->second)) && it != mp.end()){
                    
            
                    if((i < m) && (j > 0)){
                        sum += a[i][j-1];
                        row.push_back(i);
                        col.push_back(j-1);
                        //a[i][j-1] = 0;
                        c++;
                    }
                        
                    if((i < m) && (j < n-1)){
                        sum += a[i][j+1];
                        //a[i][j+1] = 0;
                        row.push_back(i);
                        col.push_back(j+1);
                        c++;
                    }
                        
                    
                    if((i > 0) && (j < n)){
                        sum += a[i-1][j];
                        //a[i-1][j] = 0;
                        row.push_back(i-1);
                        col.push_back(j);
                        c++;
                    }
                        
                    if((i < m-1) && (j < n)){
                        sum += a[i+1][j];
                        // a[i+1][j] = 0;
                        row.push_back(i+1);
                        col.push_back(j);
                        c++;
                    }
                    a[i][j] = sum;
                    
                    
                    it++;

                }
            }
        }
        
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<c; k++){
                    if((i == row[k]) && (j == col[k]))
                        a[i][j] = 0;
                }
            }
        }
        
        */
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> a(matrix);
        int sum=0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 0){
                    sum = 0;
                    
                    
                    if((i-1) >= 0){
                        sum += a[i-1][j];
                        matrix[i-1][j] = 0;
                       
                    }
                    
                    if((j-1) >= 0){
                        sum += a[i][j-1];
                        matrix[i][j-1] = 0;
                    }
                    
                    if((i+1) < m){
                        sum += a[i+1][j];
                        matrix[i+1][j] = 0;
                    }
                        
                    if((j+1) < n){
                        sum += a[i][j+1];
                        matrix[i][j+1] = 0;
                    }
                        
                    
                        
                    
                    matrix[i][j] = sum;
                }
            }
        }

        
    }
    
        
        
        
        
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends