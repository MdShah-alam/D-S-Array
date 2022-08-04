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
            if(i==0)
            sum+=ar[i][j];
            if(i==n-1)
                sum+=ar[i][j];
            if(i!=0 && i!=n-1 && i==j)
                sum+=ar[i][j];
        }
    }

    for(int i=1,j=n-2;j>0;i++,j--)
    {
        if(i!=j)
            sum+=ar[i][j];
    }

    cout<<"sum : "<<sum<<endl;

    return 0;
}
