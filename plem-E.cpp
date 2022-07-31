#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int k=1; k<=a; k++)
    {
        cout<<"Case "<<k<<":"<<endl;
        int n,m;
        cin>>n>>m;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<m; i++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                int b;
                cin>>b;
                cout<<arr[b]<<endl;
                arr[b]=0;
            }
            else if(a==2)
            {
                int b,c;
                cin>>b>>c;
                arr[b]=arr[b]+c;
            }
            else if(a==3)
            {
                int b,c;
                cin>>b>>c;
                int pre[n];
                pre[0]=arr[0];
                for(int j=1; j<n; j++)
                    pre[j]=pre[j-1]+arr[j];
                if(b==0)
                    cout<<pre[c]<<endl;
                else
                    cout<<pre[c]-pre[b];
            }
        }
    }

}
