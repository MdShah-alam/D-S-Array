#include<bits/stdc++.h>
using namespace std;

void printarray(int ar[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<endl;
}

int remove_duplicate_element(int ar[], int n)
{
    int d=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j])
            {
                int k=j;
                while(j<n)
                {
                    ar[j]=ar[j+1];
                    j++;
                }
                n--;
                d++;
                j=k;
            }
            else
                continue;
        }
    }

    return *ar,n;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    cout<<"Before delete duplicate : ";
    printarray(ar,n);

    remove_duplicate_element(ar, n);
    cout<<n<<endl;
    cout<<"After delete duplicate : ";
    printarray(ar,n);

    return 0;
}
