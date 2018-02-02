#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
struct yuebing
{
    double shuliang;
    double zongjia;
    double danjia;
};
bool cmp(yuebing a,yuebing b)
{
    return a.danjia>b.danjia;
}

int main()
{
    int N,D;
    yuebing y[1001];
    cin>>N>>D;
    int i=0;
    for(i=0;i<=N-1;i++)
    {
        cin>>y[i].shuliang;
    }
     for(i=0;i<=N-1;i++)
    {
        cin>>y[i].zongjia;
        y[i].danjia=y[i].zongjia/y[i].shuliang;
    }
    sort(y,y+N,cmp);
    i=0;
    double sum=0;
    while(y[i].shuliang<=D)
    {
        D=D-y[i].shuliang;
        sum=sum+y[i].zongjia;
        i++;
    }
    sum=sum+D/y[i].shuliang*y[i].zongjia;
    printf("%.2lf",sum);

    return 0;
}
