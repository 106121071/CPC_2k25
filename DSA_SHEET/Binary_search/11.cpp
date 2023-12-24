//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:

int bin(int arr[], int low, int high)
{
    
    if (arr[low] <= arr[high]) {
        return arr[low];
    }
 
  
    while (low <= high) {
        int mid = (low + high) / 2;
 
        if (mid-1 >= 0 && arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        }
 
        else {
            high = mid - 1;
        }
    }
}
    int findMin(int arr[], int n){
        //complete the function here
        
        return bin(arr,0,n-1);
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends