#include <bits/stdc++.h>
using namespace std;

int ceil(int arr[], int low, int high, int x)
{
	int mid;

	if (x <= arr[low])
		return low;

	if (x > arr[high])
		return -1;

	mid = (low + high) / 2; 

	if (arr[mid] == x)
		return mid;

	else if (arr[mid] < x) {
		if (mid + 1 <= high && x <= arr[mid + 1])
			return mid + 1;
		else
			return ceil(arr, mid + 1, high, x);
	}

	else {
		if (mid - 1 >= low && x > arr[mid - 1])
			return mid;
		else
			return ceil(arr, low, mid - 1, x);
	}
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
	int x;
    cin>>x;
	int i = ceil(A, 0, n - 1, x);
	if (i == -1)
		cout << "Ceiling doesn't exist ";
	else
		cout <<  A[i];

	return 0;
}
