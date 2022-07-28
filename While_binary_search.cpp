#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    int q;
    int *p=&q;
    if(n==1)
    {
        *p=arr[n-1];
    }

    else
    {
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
            {
                *p=arr[mid];
                break;
            }
            else if(arr[mid]<arr[mid+1])
                left=mid+1;
            else if(arr[mid]<arr[mid-1])
                right=mid-1;
        }

    }

    return *p;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    cout<<peakElement(ar,n)<<endl;

    return 0;
}
