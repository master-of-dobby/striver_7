//practice stl - queue
#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> s){
    
    while(!s.empty()){
        cout << s.top() << "->";
        s.pop();
    }

}

int main()
{
    stack<int> s;

    for(int i=1; i<=5; i++)
        s.push(i);
    
    s.emplace(123);

    printStack(s);


    

}
