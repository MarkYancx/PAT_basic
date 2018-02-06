#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i=0;

    int b[101];
    memset(b,0,sizeof(b));
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int k;
    cin>>k;
    if(k==0)
        return 0;
    int c[k];
    for(i=0;i<=k-1;i++)
        cin>>c[i];
    cout<<b[c[0]];
    for(i=1;i<=k-1;i++)
    {
        cout<<' '<<b[c[i]];
    }

    return 0;
}
