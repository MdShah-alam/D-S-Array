#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }

    int sum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2)
                sum=sum+ar[i][j];
            else if(j==n/2)
                sum=sum+ar[i][j];
            else if(i==0 && j<n/2)
                sum=sum+ar[i][j];
            else if(i>n/2 && j==0)
                sum=sum+ar[i][j];
            else if(i<n/2 && j==n-1)
                sum=sum+ar[i][j];
            else if(i==n-1 && j>n/2)
                sum=sum+ar[i][j];
        }
    }
    cout<<sum<<endl;

    return 0;
}
