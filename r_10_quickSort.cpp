//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high){
           int i = partition(arr, low, high);
           quickSort(arr, low, i-1);
           quickSort(arr, i+1, high);
       }
        
      
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
       
       
        int p = low;
        int q = high;
        int pivot = a[low];
        
        while(p < q){
            while((a[p] <= pivot) && (p <= high-1))
                p++;
            
            while((a[q] > pivot) && (q >= low))
                q--;
            
            if(p < q)   
                swap(a[p], a[q]);
                
        }
        
        swap(a[q], a[low]);
            
        
        return q;
       
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends