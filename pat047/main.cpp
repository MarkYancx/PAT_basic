#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n;
    cin>>n;
    int tot[1001];
    memset(tot,0,sizeof(tot));
    int team,player,mark;
    while(n--)
    {
        scanf("%d-%d  %d",&team,&player,&mark);
        tot[team]=tot[team]+mark;
    }
    int maxmark=0,maxteam,i;
    for(i=1;i<=1000;i++)
    {
        if(maxmark<tot[i])
        {
            maxmark=tot[i];
            maxteam=i;
        }
    }
    cout<<maxteam<<' '<<maxmark;
    return 0;
}
