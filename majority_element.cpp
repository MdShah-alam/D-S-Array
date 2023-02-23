#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int el=0;
    int cont=0;
    for(int i=0;i<size;i++){
        if(cont==0)
            el=a[i];
        if(el==a[i]) cont++;
        else cont--;
    }
    cont=0;
    for(int i=0;i<size;i++){
        if(el==a[i]) cont++;
    }
    if(cont>size/2)
        return el;
    else return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n)<<endl;
    return 0;
}
