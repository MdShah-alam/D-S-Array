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

int bubblesort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        bool found=true;
        cout<<"iteration : "<<i+1<<endl;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                found=false;
            }
            printarray(arr,n);
        }
        if(found)
            break;
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before sort : ";
    printarray(arr,size);

    bubblesort(arr,size);

    cout<<"After sort : ";
    printarray(arr,size);

    return 0;
}
