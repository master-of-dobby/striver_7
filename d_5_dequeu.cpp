//practice stl - queue
#include<bits/stdc++.h>
using namespace std;

void printDq(deque<int> d){

    for(auto it = d.begin(); it != d.end(); it++)
        cout << *it << " ";

    cout << endl;

    d.pop_back();
    for(auto it = d.begin(); it != d.end(); it++)
        cout << *it << " ";

    cout << endl;


    d.pop_front();
    for(auto it = d.begin(); it != d.end(); it++)
        cout << *it << " ";
    
    

}

int main()
{
    deque<int> d;

    for(int i=1; i<=5; i++)
        d.push_back(i);
    
    for(int i=6; i<=9; i++)
        d.push_front(i);
    
    printDq(d);

}
