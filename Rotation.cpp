#include<bits/stdc++.h>
using namespace std;

int rotateArray(int arr[],int d,int n)
{
    for(int j=0;j<d;j++)
    {
        int temp=arr[0];
        for(int i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
    return *arr;
}

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rotateArray(arr,d,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
