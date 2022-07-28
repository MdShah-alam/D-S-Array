#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n],b[m];

    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>b[i];

    int u[n+m];

    for(int i=0;i<n;i++)
        u[i]=a[i];

    int k=n;

    for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            u[k]=b[i];
            k++;
        }
    }

    for(int i=0;i<k;i++)
        cout<<u[i]<<" ";
    cout<<endl;

    return 0;
}
