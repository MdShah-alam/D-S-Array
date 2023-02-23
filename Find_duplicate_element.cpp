#include<bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
    unordered_map<int,int>um;
    for(int i=0;i<n;i++)
        um[arr[i]]++;
    vector<int>v;
    for(auto x:um){
        if(x.second>1)
            v.push_back(x.first);
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
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int>v=duplicates(arr,n);
    for(int a:v)
        cout<<a<<" ";
    cout<<endl;
    return 0;
}
