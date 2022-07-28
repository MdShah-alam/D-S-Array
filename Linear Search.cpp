#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int value;
    cout<<"Enter the value :";
    cin>>value;
    bool found=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            cout<<"the index is :"<<i<<" the position is :"<<i+1<<endl;
            found=false;
        }
    }

    if(found)
        cout<<"the value is not exist in the array"<<endl;
    return 0;
}
