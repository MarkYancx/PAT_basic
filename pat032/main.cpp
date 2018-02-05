#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int  N;
    cin>>N;
    int num,fen;
    int a[N];
    memset(a,0,sizeof(a));
    int max=0;
    if(N==1)                     //注意N==1的特殊情况
    {
        cin>>num>>fen;
        cout<<num<<' '<<fen;
        return 0;
    }
    while(N--)
    {
        cin>>num>>fen;
        a[num]=a[num]+fen;
        if(num>max)
            max=num;
    }
    int i=1;
    int maxfen=0,maxnum=0;
    for(;i<=max;i++)
    {
        if(a[i]>=maxfen)
        {
            maxfen=a[i];
            maxnum=i;
        }
    }
    cout<<maxnum<<' '<<maxfen;

    return 0;
}
