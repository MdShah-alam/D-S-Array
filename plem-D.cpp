#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int k=0; k<a; k++)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int ar[1001]= {0};

        for(int i=0; i<n; i++)
        {
            ar[arr[i]]++;
        }

        int d=0;

        for(int i=0; i<1001; i++)
        {
            d=max(ar[i],d);
        }

        int l=n-d;
        cout<<l<<endl;
    }
}
