#include<iostream>

using namespace std;

int peakEleBruteForce(int a[], int n) {


        int low = 0;
        int high = n-1;

        while(low < high){
            int mid = (low + high)/2;

            if(mid == 0)
                return a[0] > a[1] ? 0 : 1;
            
            else if(mid == n-1)
                return a[n-1] > a[n-2] ? n-1 : n-2;

            if((a[mid] > a[mid-1]) && (a[mid] > a[mid+1]))
                return mid;
            
            if(a[mid] < a[mid-1])
                high = mid-1;
            else
                low = mid+1;

        }

        return low;
        
    
}

int main() {

  int arr[] = {3, 5, 4, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Peak Element index is " << peakEleBruteForce(arr, n);

  return 0;
}