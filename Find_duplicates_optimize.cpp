#include<bits/stdc++.h>
using namespace std;

vector<int>duplicates(int arr[],int n)
{
    for(int i=0;i<n;i++){
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]>=n*2)
            v.push_back(i);
    }
    if(v.empty())
        v.push_back(-1);
    return v;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v=duplicates(arr,n);
    for(int a:v)
        cout<<a<<" ";
    return 0;
}
