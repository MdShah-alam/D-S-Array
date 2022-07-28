#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int value,int lb,int ub)
{
    int mid=(lb+ub)/2;

    if(lb<=ub)
    {
        if(arr[mid]==value)
            return mid;
        else if(arr[mid]>value)
            return binarySearch(arr,value,0,mid-1);
        else
            return binarySearch(arr,value,mid+1,ub);
    }
    else
        return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int value;
    cout<<"Enter the value :";
    cin>>value;

    int d=binarySearch(arr,value,0,n-1);

    if(d>=0)
    cout<<"the index is :"<<d<<" the position is :"<<d+1<<endl;

    else
        cout<<"This value is not contain this array "<<endl;


    return 0;
}
