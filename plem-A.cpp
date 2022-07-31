#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[4];
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }

    int cont=0;

    for(int i=0;i<4;i++)
    {
        if(ar[i]>=10)
            cont++;
    }

    cout<<cont<<endl;


    return 0;
}
