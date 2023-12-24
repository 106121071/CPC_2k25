//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxLength(string S)
    {
        // code here
     
    int n = S.size();
    vector<int> ans;
 
    ans.push_back(S[0]);
 
    for (int i = 1; i < n; i++) {
        if (S[i] > ans.back()) {
 
         
            ans.push_back(S[i]);
        }
        else {
            int low = lower_bound(ans.begin(), ans.end(), S[i]) - ans.begin();
 
         
            ans[low] = S[i];
        }
    }
 
    return ans.size();
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends