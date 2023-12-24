#include <bits/stdc++.h> 
using namespace std; 
  
int bin(int arr[], int low, int high) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if (mid == arr[mid]) 
            return mid; 
        int res = -1; 
        if (mid + 1 <= arr[high]) 
            res = bin(arr, (mid + 1), high); 
        if (res != -1) 
            return res; 
        if (mid - 1 >= arr[low]) 
            return bin(arr, low, (mid - 1)); 
    } 

    return -1; 
} 
  
/* Driver code */
int main() 
{ 
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    cout << bin(A, 0, n - 1); 
    return 0; 
} 