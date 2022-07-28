#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int pos;
    cout<<"Enter the position that you want to delete :";
    cin>>pos;

    if(pos==n)
    {
        cout<<"After delete :";
        for(int i=0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    else
    {
        for(int i=pos-1; i<n; i++)
        {
            arr[i]=arr[i+1];
        }
    }

    cout<<"After delete :";
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
