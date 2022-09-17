//welcome to dsa - set
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    multiset<int> s;
    

    //iterator creation
    set<int>::iterator itr;

    //insertion
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    

    //deleting
    s.erase(5);

    //present or not;
    for(auto it = s.begin(); it != s.end(); it++)
        if(*it == 4)
            cout << "element 4 is present!" << endl;
        else if(it == s.end())
            cout << "NOT present!" << endl;
    
    
    //to delete all elements
    //s.clear();

    //size;
    cout << "size = " << s.size() << endl;

    //empty
    if(s.empty()) 
        cout << "multiset is empty!" << endl;
    else
        cout << "multiset is NOT empty!" << endl;


    cout << "multiset elements :: " << endl;

    for(auto it = s.begin(); it != s.end(); it++)
        cout << * it << " ";
  

  
   
}



