#include<bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int> a){

	sort(a.begin(), a.end());
	int max_count=0;
	int count=0;
	int prev = a[0];

	for(int i=1; i<a.size(); i++){
		if(a[i] == prev + 1){
			count++;
			
		}
		else{
			if(count > max_count)
				max_count = count;
			count = 0;
		}
		prev  = a[i];
			
	}
	return max_count+1;

}



int main()
{
    vector<int> arr{5,100,200,1,2,3,4};
    int lon=longestConsecutive(arr);
    cout<<"The longest consecutive sequence is "<<lon<<endl;
        
}