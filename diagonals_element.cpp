#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>ar[i][j];
        }
    }

    cout<<"Major diagonal: ";

    for(int i=0,j=0; j<n; i++,j++)
        cout<<ar[i][j]<<" ";
    cout<<endl;

    cout<<"Minor diagonal: : ";

    for(int i=0,j=n-1; i<n; i++,j--)
        cout<<ar[i][j]<< " ";
    cout<<endl;

    return 0;
}
