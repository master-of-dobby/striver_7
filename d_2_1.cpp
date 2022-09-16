//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int p=1,s=(2*n)-2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout << j << " ";
        


        for(int k=1; k<=2*s; k++)
            cout << " ";
            

        for(int p=i; p>=1; p--)
            cout  << p << " ";
            
            
            
            
        s = s-2;
        cout << endl;
            
    }

   

   
}
