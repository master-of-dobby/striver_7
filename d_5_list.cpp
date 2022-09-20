//practice stl - queue
#include<bits/stdc++.h>
using namespace std;

void printList(list<int> l){
    for(auto it = l.begin(); it != l.end(); it++)
        cout << "->" << *it;
    
}



int main()
{
    list<int> l;

    for(int i=1; i<=5; i++)
        l.push_back(i);
    
    for(int i=5; i<=10; i++)
        l.push_front(i);
    
    printList(l);

    cout << "\n\tAfter sorting : \n ";

    l.sort();

    printList(l);

    cout << "\n\t After reversing \n ";

    l.reverse();

    printList(l);
    


    

}
