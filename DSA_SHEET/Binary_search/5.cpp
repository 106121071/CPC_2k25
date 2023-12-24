#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	

	int bin(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
 
    int mid = l + (r - l) / 2;
 
 
    if (arr[mid] == x)
        return mid;
 
    if (arr[mid] > x)
        return bin(arr, l, mid - 1, x);
 
    return bin(arr, mid + 1, r, x);
}
 
	int count(int arr[], int n, int x) 

{
    int ind = bin(arr, 0, n - 1, x);
 
    if (ind == -1)
        return 0;
 
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == x)
        count++, left--;
 
 
    int right = ind + 1;
    while (right < n && arr[right] == x)
        count++, right++;
 
    return count;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
