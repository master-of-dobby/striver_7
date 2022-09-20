//practice stl - queue
#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> l){
    for(auto it = l.begin(); it != l.end(); it++)
        cout << "->" << *it;
    
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){
    return(a.second < b.second);
}


int main()
{
    vector<int> l;

    for(int i=1; i<5; i++)
        l.push_back(i);
    
    printList(l);

    cout << "\n\tAfter sorting : \n ";
    sort(l.begin(), l.end());
    printList(l);

    cout << "\n\t After reversing \n ";
    reverse(l.begin(), l.end());
    printList(l);

    cout << "\n\t next permutatuion \n";
    next_permutation(l.begin(), l.end());
    printList(l);

    next_permutation(l.begin(), l.end());
    cout << endl;
    printList(l);

    cout << "\n\t Decreasing order " << endl;
    sort(l.begin(), l.end(), greater<int>());
    printList(l);

    vector<pair<int, int>> v = {{10,3}, {20, 1}, {30, 2}};

    sort(v.begin(), v.end(), sortbysec);

    cout << "\n\t After sorting in custom order : \n";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << it->first << " " << it->second << endl;




    

}
