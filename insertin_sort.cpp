#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int insertionsort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        cout<<"i : "<<i<<" key : "<<key<<endl;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            printarray(arr,n);
            j--;
            cout<<endl;
        }
        arr[j+1]=key;
        printarray(arr,n);
        cout<<endl;
    }
    return *arr;
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


    cout<<"Before sort : ";
    printarray(arr,n);

    insertionsort(arr,n);
    cout<<"After sort : ";
    printarray(arr,n);
}
