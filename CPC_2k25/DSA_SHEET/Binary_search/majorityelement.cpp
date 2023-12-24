#include<bits/stdc++.h>

using namespace std;

class solution
{
    public:
    bool major(int A[],int l, int h,int x,int n)
    {
        if(l<=h)
        {
        int mid=(l+h)/2;
        int low;
        if(x==A[mid]){
        if(mid==0)
        low=mid;
        else if(A[mid-1]<x)
        low=mid;
        else{
            int temp=mid;
          //  int temp1=mid;
        while(temp>0&&A[temp-1]==x)
        {
            low=temp-1;
            temp=temp-1;
        }
        }
        if((low+n/2)<=(n-1)&&A[(low+n/2)]==x)
        return true;
        }

        else if(x<A[mid])
        return major(A,l,mid-1,x,n);

        else
        return major(A,mid+1,h,x,n);

        }

    return false;
    }
};

int main()
{

    int n;
    cin>>n;
    int x;
    cin>>x;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    solution s;

    bool ans= s.major(A,0,n-1,x,n);
    
    if(ans==1)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;

    return 0;
}