#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[1001],b[1001];
    cin>>a>>b;
    int s1[200],s2[200];
    memset(s1,0,sizeof(s1));
    memset(s2,0,sizeof(s2));
    int lengtha=strlen(a);
    int lengthb=strlen(b);
    int i=0;
    for(i=0;i<=lengtha-1;i++)         //S1储存老板的珠子，S2储存自己要想的珠子
    {
        s1[a[i]]++;
    }
    for(i=0;i<=lengthb-1;i++)
    {
        s2[b[i]]++;
    }
    int flag=1;
    int count=0;
    for(i=0;i<=199;i++)
    {
        if(s2[i]>s1[i])
        {
            flag=0;
            count=count+s2[i]-s1[i];

        }
    }
    if(flag==1)
    {
        cout<<"Yes"<<' '<<lengtha-lengthb;
    }
    else
    {
        cout<<"No"<<' '<<count;
    }
    return 0;
}
