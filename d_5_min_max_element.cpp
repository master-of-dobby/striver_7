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

    for(int i=1; i<=5; i++)
        l.push_back(i);
    
    printList(l);

    cout << "\n\t minimum element : " << *min_element(l.begin(), l.end()) << endl;

    cout << "\n\t maximum element : " << *max_element(l.begin(), l.end()) << endl;

   

    

    vector<pair<int, int>> v = {{10,3}, {20, 1}, {30, 2}};

    sort(v.begin(), v.end(), sortbysec);

    cout << "\n\t After sorting in custom order : \n";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << it->first << " " << it->second << endl;
    
    auto result = *std::min_element(v.cbegin(), v.cend(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;  });

    cout << "\n\t minimum pair \n";
    cout << result.first << " " << result.second << endl;




    

}
