#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    vector<int>a = {1, 3, 2};
	int n = a.size(), k, l;

	/*

	for(k = n-2; k >=0; k--){
		if(a[k] < a[k+1])
			break;
	}
	if(k < 0){
		reverse(a.begin(), a.end());
	}
	else{
		for(l = n-1; l > k; l--){
			if(a[l] > a[k])
				break;
		}
		
		swap(a[k], a[l]);

		reverse(a.begin()+k+1, a.end());
	}

	

	for(int i=0; i<a.size(); i++)
		cout << a[i] << " ";




	//next_permutation(arr, arr+3);
	*/

	for(k = n-2; k>=0; k--){
		if(a[k] < a[k+1])
			break;
	}
	if(k < 0)
		reverse(a.begin(), a.end());
	else{
		for(l = n-1; l>=k; l--){
			if(a[l] > a[k])
				break;
		}
		swap(a[l], a[k]);
		reverse(a.begin()+k+1, a.end());
	}

	
	for(int i=0; i<a.size(); i++)
		cout << a[i] << " ";
   
    
    return 0;
}

