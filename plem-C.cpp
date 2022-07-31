#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int j=1; j<=n; j++)
    {
        int a;
        cin>>a;
        int arr[a];

        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }

        for(int k=0;k<a;k++)
        {
            for(int i=0;i<a-1-k;i++)
            {
                if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
        }
        int i=0;
        for(i=1;i<a;i++)
            if(arr[0]!=arr[i])
            break;

        int l=a-i;

        cout<<l<<endl;
    }
}
