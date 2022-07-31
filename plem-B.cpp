#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int k=1; k<=n; k++)
    {
        cout<<"Case "<<k<<":";
        int a,b;
        cin>>a>>b;

        int ar[a];

        for(int i=0; i<a; i++)
        {
            cin>>ar[i];
        }

        for(int i=0; i<b; i++)
        {
            int c,d;
            cin>>c>>d;
            cout<<min(ar[c-1],ar[d-1])<<endl;
        }

    }
    return 0;
}
