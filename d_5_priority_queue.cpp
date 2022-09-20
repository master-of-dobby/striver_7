//practice stl - queue
#include<bits/stdc++.h>
using namespace std;

void printPq_max(priority_queue<int> d){

    while( !d.empty()){
        cout << d.top() << "->";
        d.pop();
    }
}

void printPq_min(priority_queue<int, vector<int>, greater<int>> d){

    while( !d.empty()){
        cout << d.top() << "->";
        d.pop();
    }

}

int main()
{
    priority_queue<int> pq;

    pq.push(43);
    pq.push(5);
    pq.push(34);
    pq.push(1);
    pq.push(2);

    priority_queue<int, vector<int>, greater<int>> q;

    q.push(43);
    q.push(5);
    q.push(34);
    q.push(1);
    q.push(2);


    printPq_max(pq);

    cout << endl;
    
    printPq_min(q);

}
