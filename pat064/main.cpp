#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[40];
    memset(a,0,sizeof(a));
    int i=0;
    int t;
    int count=0;
    for(i=0;i<=n-1;i++)
    {
        cin>>t;
        int sum=0;
        while(t!=0)
        {
            sum=sum+t%10;
            t=t/10;
        }
        if(a[sum]==1)
        {
            continue;
        }
        a[sum]=1;
        count++;
    }
    cout<<count<<endl;
    bool flag=1;
    for(i=0;i<=39;i++)
    {
        if(flag&&a[i]==1)
        {
            flag=0;
            cout<<i;
            continue;
        }
        if(a[i]==1)
            cout<<' '<<i;
    }

    return 0;
}
