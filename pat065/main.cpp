#include <iostream>
#include<string.h>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100001];
    memset(a,-1,sizeof(a));
    int i=0,p,q;
    for(i=0;i<=n-1;i++)
    {
        cin>>p>>q;
        a[p]=q,a[q]=p;

    }
    int m;
    cin>>m;
    int b[100001];
    int c[m];
    memset(b,-1,sizeof(b));
    int t;
    for(i=0;i<=m-1;i++)
    {
        cin>>c[i];
        b[c[i]]=1;


    }
    int count=m;
    for(i=0;i<=m-1;i++)
    {
        if(a[c[i]]!=-1&&b[a[c[i]]]!=-1)
        {
            count--;
            c[i]=-1;

        }
    }
    int d[count];
    int j=0;
    for(i=0;i<=m-1;i++)
    {
        if(c[i]!=-1)
        {
            d[j]=c[i];
            j++;
        }
    }
    sort(d,d+count);
    cout<<count<<endl;
    int flag=1;

    for(i=0;i<=count-1;i++)
    {
        if(flag)
        {
            //cout<<cout.widen(5)<<d[i];
            printf("%05d",d[i]);
            flag=0;
            continue;
        }
        //cout<<' '<<cout.widen(5)<<d[i];
        printf(" %05d",d[i]);
    }

    return 0;
}
