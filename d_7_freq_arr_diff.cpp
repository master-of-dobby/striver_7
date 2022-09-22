//lowest and highest frequency count
#include<bits/stdc++.h>
using namespace std;

int freq_dif(int a[], int n){
    int min=n, max=0,c=0;

    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        c=0;
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                c++;
            }

            if(c > max)
                max = c;
            
            if(c < min)
                min = c;
        }
    }

    return max-min;

}

int main()
{
    //int a[] = { 7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5 };
    int a[] = {7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "frequency difference : " << freq_dif(a, n) << endl;

    map<int, int> m;


    for(int i=0; i<n; i++)
        m[a[i]]++;
    
    //for(auto it = m.begin(); it != m.end(); it++)
     //   cout << it->first << " " << it->second << endl;
    
    map<int, int>::iterator i = m.begin();

    int max = i->first;
    int min = i->first;

    for(auto it = m.begin(); it != m.end(); it++){
        if(max < it->second)
            max = it->second;
        
        if(min > it->second)
            min = it->second;
    }

    cout << "max frequency : " << max << endl;
    cout << "min frequency : " << min << endl;
    cout << "frequency diff. : " << max-min  << endl;





}
