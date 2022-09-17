//welcome to dsa - multimap
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    multimap<int, int> m;

    //iterator creation
    multimap<int, int>::iterator itr;

    //insertion
    m.insert({4, 40});
    m.insert({3, 70});
    m.insert({5, 60});
    m.insert({6, 60});
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 50});

    
    
    
    cout << "max size : " << m.max_size() << endl;
    

    //deleting
    m.erase(5);

    //present or not;
    for(auto it = m.begin(); it != m.end(); it++)
        if(it->second == 400)
            cout << "element found!" << endl;
        else if(it != m.end()){
            itr = it;
            if(++itr == m.end())
                cout << "Element NOT found!" << endl;
        }
        
    
   
           
    
    
    //to delete all elements
    //m.clear();

    //size;
    cout << "size = " << m.size() << endl;

    if(m.empty())
        cout << "multimap is Empty!" << endl;
    else
        cout << "multimap is NOT empty!" << endl;

    


    cout << "multimap elements :: " << endl;
    cout << "key " << "  value" << endl;
    for(auto it = m.begin(); it != m.end() ; it++)
        cout << it->first << "      " << it->second << endl;
       

   
    

   
}



