//welcome to dsa - unordered set
#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;

int main()
{
    //creation
    unordered_set<int> s;

    //iterator creation
    unordered_set<int>::iterator it;

    //insertion
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(9);
    s.insert(6);
    s.insert(7);

    //deleting
    s.erase(4);
    s.erase(s.find(3), s.end());
    s.erase(s.find(6));

    //present or not;

    if(s.count(9))
        cout << "element 9 is present!" << endl;
    else
        cout << "NOT present!" << endl;
    
    //to delete all elements
    //s.clear();

    //size;
    cout << "size = " <<  s.size() << endl;

    //empty
    if(s.empty())   
        cout << "set is empty!" << endl;
    else
        cout << "set is NOT empty!" << endl;


    cout << "set elements :: " << endl;
    for(auto it = s.begin(); it != s.end(); it++)
        cout << * it << " ";
  

  
   
}



