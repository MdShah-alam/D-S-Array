#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int ar[n][m];
    int d=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ar[i][j];
            d=max(d,ar[i][j]);
        }
    }

    cout<<d<<endl;

    int c[d+1]= {0};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int e=ar[i][j];
            if(c[e]>0)
                ar[i][j]=-1;
            else
            {
                c[e]++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
