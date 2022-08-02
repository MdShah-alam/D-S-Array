#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxi=arr[0];

    for(int i=1; i<n; i++)
    {
        maxi=max(maxi,arr[i]);
    }

    cout<<"maximum : "<<maxi<<endl;

    int cont[maxi+1] {0};

    for(int i=0; i<n; i++)
    {
        cont[arr[i]]++;
    }

    for(int i=1; i<maxi+1; i++)
    {
        cont[i]=cont[i-1]+cont[i];
    }

    for(int i=0; i<maxi+1; i++)
    {
        cout<<cont[i]<<" ";
    }

    int Final[n] {0};

    for(int i=n-1; i>=0; i--)
    {
        cont[arr[i]]--;
        int k=cont[arr[i]];
        Final[k]=arr[i];
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<Final[i]<<" ";
    }

    return 0;

}
