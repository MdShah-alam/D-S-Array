#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];

    int pre[n];
    pre[0]=ar[0];

    cout<<"The prefix sum array is :";
    for(int i=1; i<n; i++)
        pre[i]=pre[i-1]+ar[i];

    for(int i=0; i<n; i++)
    {
        cout<<pre[i]<<" ";
    }

    cout<<endl;

    cout<<"Enter the index to get between there sum : ";
    int a,b;

    cin>>a>>b;

    int sum=0;

    if(a==0)
        sum=pre[b];
    else
        sum=pre[b]-pre[a-1];

    cout<<"sum : "<<sum<<endl;

    return 0;
}
