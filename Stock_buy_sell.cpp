#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    int buy=0,sell=0,flag=0;
    vector<vector<int>>ak;

    for(int i=1;i<n;i++)
    {
        if(A[i]>=A[i-1] && A[i]!=A[buy]){
            sell=i;
            flag=1;
        }
        else if(buy==sell){
            buy=i;
            sell=i;
        }
        else{
            vector<int>a;
            a.push_back(buy);
            a.push_back(sell);
            ak.push_back(a);
            buy=i;
            sell=i;
        }
    }
    if(flag==0)
        return ak;
    else if(buy!=n-1 && sell==n-1){
        vector<int>a;
        a.push_back(buy);
        a.push_back(sell);
        ak.push_back(a);
    }
    return ak;
}
//{100,180,260,310,40,535,695}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<vector<int>>ad=stockBuySell(v,n);
    for(vector<int>k:ad){
        for(int i:k)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
