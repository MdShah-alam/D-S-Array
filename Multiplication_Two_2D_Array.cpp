#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3][3];
    int arr[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cin>>ar[i][j];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cin>>arr[i][j];
    }

    int a[3][3];

    int n=0;
    int k=0;
    int i=0;

    while(k<3)
    {
        int r=0;
        int m=0;
        while(r<3)
        {
            int sum=0;
            for(int j=0; j<3; j++)
            {
                sum+=ar[i][j]*arr[j][i];
            }
            a[n][m]=sum;
            m++;
            r++;
        }
        i++;
        n++;
        k++;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
