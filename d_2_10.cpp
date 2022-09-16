//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int i,j,k,m;  

  
    for(i=1; i<=n; i++){


        if(i==1 || i==n)
            for(j=1; j<n; j++)
                cout << "*";
        else{

            cout << "*";
            for(j=1; j<n-2; j++)
                cout << " ";
            
            cout << "*";
        }
        

        
        cout << endl;
        
        
        
        
    }

  
   
}

