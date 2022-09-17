//practice
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //to count number of digits
    int n,s=0,k;
    cin >> n;
    int m=n;


    
    while(n){
        k = n%10;
        
        if(k == 0){
            
        }
        else{
            if(m % k == 0)
                s++;
        }
       
            
        n = n/10;
    }


    cout << s << endl;

    
}
