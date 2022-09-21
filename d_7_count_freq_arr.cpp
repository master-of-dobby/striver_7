#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {10,5,10,15,10,5};
    int n = sizeof(a)/sizeof(a[0]);

    vector<int> visited(n, false);

    for(int i=0; i<n-1; i++){

        if(visited[i] == true)
            continue;
        
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                visited[j] = true;
                count++;
            }
        }
        visited[i] = true;

        

        cout << a[i] << " " << count << endl;
    }

    
    for(int i=0; i<visited.size(); i++)
            cout << visited[i] << " ";

    return 0;





    
    return 0;
}
c
