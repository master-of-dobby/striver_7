//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
        void MoveZero(int a[], int n){
            int temp=0;

            for(int i=0; i<n; i++)
                if(a[i] == 0)
                    temp++;

            for(int i=0; i<(n-temp); i++){
                if(a[i] == 0 ){
                    for(int k = i; k<n-1; k++)
                        a[k] = a[k+1];
                    
                    a[n-1] = 0;
                    i--;
                }
                //for(int i=0; i<n; i++)
                  //  cout << a[i] << " ";
                
                cout << endl;
            }
        }

        void MoveZero1(int a[], int n){
            int k=0;

            while(k < n){
                if(a[k] == 0)
                    break;
                
                else
                    k++;
            }

            int i=k, j=k+1;

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

        void MoveZero2(int a[], int n){
            int temp[n], k=0;

            for(int i=0; i<n; i++)
                if(a[i] != 0)
                    temp[k++] = a[i];
            
            for(int i=0; i<n; i++)
                a[i] = 0;
            
            for(int i=0; i<k; i++)
                a[i] = temp[i];
            
            
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
		
		//ob.MoveZero(a, n);
        //ob.MoveZero1(a, n);
        ob.MoveZero2(a, n);

        for(int i=0; i<n; i++)
            cout <<  a[i] << " ";
	}
    
    return 0;
    
}

// } Driver Code Ends
