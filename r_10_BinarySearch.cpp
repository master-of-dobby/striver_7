#include<bits/stdc++.h>
using namespace std;

int main() {
   	int a[]= {2,3,7,10,13,14,17};
    int k = 14;
	int n = sizeof(a)/sizeof(int);

	int low = 0;
	int high = n-1;
	int flag=0;

	while(low <= high){
		int mid = (low+high)/2;

		if(a[mid] == k){
			cout << "Element found at " << mid+1 << endl;
			flag = 1;
			break;
		}
			
		
		else{
			if(a[mid] > k)
				high = mid-1;
			else
				low = mid+1;
		}
	}

	if(flag == 0)
		cout << "Element NOTfound!" << endl;

      
}
