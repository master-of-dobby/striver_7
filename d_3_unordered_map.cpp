//welcome to dsa - unordered_map
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    unordered_map<int, int> m;

    //iterator creation
    unordered_map<int, int>::iterator itr;

    //insertion
    m.insert({4, 40});
    m.insert({3, 70});
    m.insert({5, 60});
    m.insert({6, 60});
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 50});
    
    
    
    //cout << m.max_size() << endl;
    

    //deleting
    //m.erase(5);

   
    //present or not;
    for(auto it = m.begin(); it != m.end(); it++)
        if(it->second == 40)
            cout << "element 40 is present!" << endl;
        else if(it !=m.end()){
            itr = it;
            if(++itr == m.end())
                cout << "NOT present!" << endl;
        }
           
    
    
    //to delete all elements
    //m.clear();

    //size;
    cout << "size = " << m.size() << endl;

    //empty
    if(m.empty()) 
        cout << "unordered map is empty!" << endl;
    else
        cout << "unordered map is NOT empty!" << endl;


    cout << "unordered map elements :: " << endl;

    for(auto it = m.begin(); it != m.end(); it++)
        cout <<  it->first << " " << it->second << endl;
    

   
}



