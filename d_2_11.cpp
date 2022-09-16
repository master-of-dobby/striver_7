//welcome program for striver
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int len = 2*n-1;

    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            int m = min(i,j);
            m = m < len-i ? m : len-i-1;
            m = m < len-j-1 ? m : len-j-1;
            cout << n-m;
        }

        cout << endl;
    }

  


  
   
}




  /*
    int n=5;
    int i,j,m;  
    int k=n;
    int q=n;
    m=n+1;

    if(n==1){
        cout << "1" << endl;
    }

    else{

    for(i=1; i<=n; i++){
        k = n;

        for(j=1; j<=i; j++)
            cout << k--;
        
        for(j=1; j<=m; j++){
            cout << k+1;
        }
        m = m-2;
        

        k=q;
        q--;

        if(k!=1)
            for(j=1; j<=i; j++)
                cout << k++;
        else{
            //k++;
            for(j=2; j<=i; j++)
                cout << ++k;
        }
 
        cout << endl;
 
        
    }

    m = 2;
    q = 2;
    k = q;
    for(i=1; i<n; i++){
        q = k;
        
        for(j=n; j>=i+1; j--)
            cout << j;
        
        for(j=1; j<=2*i-1; j++)
            cout << m;
        
        m++;

        for(j=n; j>i; j--){
            cout << q++;
        }

        k++;

        

        


        cout << endl;
    }
    }

    */
