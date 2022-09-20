#include <bits/stdc++.h>
using namespace std;

//N to 1

void fun1(int n, int i){
    if(i > n)
        return;
    
    fun1(n, i+1);
    cout << i << " ";

}

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
    cout << endl;
    fun1(n, 1);
    
    return 0;
}
