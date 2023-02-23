#include<bits/stdc++.h>
using namespace std;

int max_sum(vector<int>&arr,int n)
{
    int cur_sum=0;
    int max_sum=arr[0];
    for(int i=0;i<n;i++){
        cur_sum+=arr[i];
        if(cur_sum>max_sum)
            max_sum=cur_sum;
        if(cur_sum<0)
            cur_sum=0;
    }
    return max_sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<max_sum(arr,n)<<endl;
    return 0;
}
