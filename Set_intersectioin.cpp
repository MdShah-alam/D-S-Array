#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n],br[m];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>br[i];
    }

    int a=0;

    if(n<m)
       a=n;
    else
        a=m;
    int k=0;
    int ur[a];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i]==br[j])
            {
                ur[k]=ar[i];
                k++;
                break;

            }
        }
    }
    for(int i=0;i<k;i++)
    {
      cout<<ur[i]<<" ";
    }

    cout<<endl;

    return 0;
}
