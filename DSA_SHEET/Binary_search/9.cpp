//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
         int low, high;
 
    int pos = n;
    int ans = 0;
 
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
 
     
        int ub = upper_bound(ar1, ar1 + n, mid) - ar1 + upper_bound(ar2, ar2 + n, mid) - ar2;
 
        if (ub <= pos)
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    ans = low;
 
 
    pos--;
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        int ub = upper_bound(ar1, ar1 + n, mid) - ar1 + upper_bound(ar2, ar2 + n, mid) - ar2;
 
        if (ub <= pos)
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    ans = (ans + low) / 2;
 
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends