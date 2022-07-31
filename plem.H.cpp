#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[200000];
    cin>>s;

    int i;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='A')
            break;
    }

    int n=strlen(s),j;

    for(j=n-1;j>=0;j--)
    {
        if(s[j]=='Z')
            break;
    }
    cout<<j-i+1;
}
