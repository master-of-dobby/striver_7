#include <bits/stdc++.h>
using namespace std;

//N to 1
void fun(int n){
    if(n == 0)
        return;
    
    cout << n << " ";
    fun(n-1);

}


int main()
{
    int n;
    cout << "Enter the count : ";
    cin >> n;

    fun(n);
    
    return 0;
}
