/*#include <iostream>           有4分过不去，2分超时，2分错误
#include<algorithm>
#include<math.h>

using namespace std;
struct element
{
    int number;
    int flag=1;

};

int main()
{

    int n,i=0,j=0,k=0;
    cin>>n;
    element a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i].number;
    }
    for(i=0;i<=n-1;i++)
    {
        if(!a[i].flag)
            continue;
        for(j=i+1;j<=n-1;j++)
        {
            if(!a[j].flag)
                continue;
            if(a[i].number>a[j].number)
            {
                a[i].flag=0;
                a[j].flag=0;
            }
            if(a[i].number==a[j].number)
            {
                for(k=i;k<=j;k++)
                {
                    if(a[k].number!=a[i].number)
                    {
                        a[j].flag=0;

                    }
                }
            }
        }

    }
    int b[100000];
    int count=0;
    for(i=0,j=0;i<=n-1;i++)
    {
        if(a[i].flag==1)
        {
            b[j]=a[i].number;
            j++;
            count++;
        }
    }
    if(count==0)
    {
        cout<<count<<endl;
        cout<<endl;
        return 0;
    }
    sort(b,b+count);
    cout<<count<<endl;
    cout<<b[0];
    for(i=1;i<=count-1;i++)
        cout<<' '<<b[i];


    return 0;
}*/




#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    int i=0,count=0,max=0;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=0;i<=n-1;i++)
    {
        if(max<a[i])max=a[i];
        if(a[i]==b[i]&&max==a[i])c[count++]=a[i];

    }
    cout<<count<<endl;
    for(i=0;i<=count-1;i++)
    {
        if(i==0)
            cout<<c[i];
        else
            cout<<' '<<c[i];
    }
    cout<<endl;   //没有这行会格式错误



    return 0;
}































