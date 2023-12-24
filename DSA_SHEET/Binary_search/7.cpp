//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:

    int bin(int arr[],int low,int high)
    {
	   int n = high + 1;
 
    
    while (low <= high) {
       
        int mid = low + (high - low) / 2;
         
        
        if(arr[mid] > arr[mid+1] and arr[mid] > arr[mid-1])
              return arr[mid];
 
        else if (arr[mid] < arr[mid + 1])
            low = mid + 1;
 
       
        else
            high = mid - 1;
    }
 
    return arr[high];
    }
	int findMaximum(int arr[], int n) {
	 
	 return bin(arr,0,n-1);
	}
 
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends