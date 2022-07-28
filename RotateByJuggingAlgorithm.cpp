#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b>0)
    {
        int rem=a%b;
        b=a;
        a=rem;
    }
    return a;
}
void rotateArr(int arr[], int d, int n)
{
    int i,j,k,temp;
    for(int i=0;i<gcd(d,n);i++)
    {
        temp=arr[i];
        j=i;

        while(1)
        {
            k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            arr[i]=arr[k];
            j=k;

        }
        arr[j]=temp;
    }

        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    rotateArr(arr, d, n);

    cout<<endl;
    return 0;
}

