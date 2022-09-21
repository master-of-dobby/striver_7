//recursion - parameterized and functional
#include <bits/stdc++.h>
using namespace std;


void fun(int i, int sum){

    if(i == 0){
        cout << sum << endl;
        return;
    }
    
    fun(i-1, sum + i);
}


int fun1(int n){
    if(n == 0)
        return 0;
    
    return n + fun1(n - 1);
}

int main()
{
    int n = 5;
    cout << "Enter n value : ";
    cin >> n ;

    fun(n, 0);

    cout << fun1(n) << endl;
}
