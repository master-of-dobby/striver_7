//welcome to dsa
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    //creation
    vector<char> c;
    

    //iterator creation
    vector<char>::iterator itr;

    //insertion
    c.push_back('a');
    c.push_back('i');
    c.push_back('e');
    c.push_back('o');
    c.push_back('u');
    c.push_back('k');
    c.push_back('l');

    //deleting
    c.erase(c.end()-2, c.end());
   

    //present or not;
    for(auto it = c.begin(); it != c.end(); it++)
        if(*it == 'a')
            cout << "element a is present!" << endl;
        else if(it == c.end())
            cout << "NOT present!" << endl;
    
    
    //to delete all elements
    //c.clear();

    //size;
    cout << "size = " << c.size() << endl;

    //empty
    if(c.empty()) 
        cout << "vector is empty!" << endl;
    else
        cout << "vector is NOT empty!" << endl;


    cout << "vector elements :: " << endl;

    for(auto it = c.begin(); it != c.end(); it++)
        cout << * it << " ";
  

  
   
}



