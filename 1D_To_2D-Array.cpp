#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            while(ar[i]<ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    cout<<endl;
    n=sqrt(n);

    int arr[n][n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=ar[k];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
