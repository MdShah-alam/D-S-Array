#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }

    int a=0,b=0;
    int maxi=ar[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(maxi<ar[i][j])
           {
               swap(maxi,ar[i][j]);
               a=i;
               b=j;
           }
        }
    }

    cout<<"Maximum : "<<maxi<<endl;
    cout<<"Location : "<<"["<<a<<"]"<<"["<<b<<"]"<<endl;
    return 0;
}
