//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=4;
    char ch='A';
    

    int i,j,k,m;    
    for(i=1;i<=n;i++)   
    {    

        for(j=n;j>i;j--)    
            cout << " ";

        for(k=1;k<=i;k++)    
            cout << ch++;
          
        ch--;    

        for(m=1;m<i;m++)    
           cout << --ch; 

        cout << endl; 
        ch = 'A' ;
    }  

   

   
}
