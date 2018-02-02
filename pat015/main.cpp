#include <iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
struct student
{
    int xuehao;
    int de,cai;
    int sum;
    int rank;
}s[100000];
bool cmp(student a,student b)
{
    if(a.rank!=b.rank)
        return a.rank<b.rank;
    else
        if(a.sum!=b.sum)
            return a.sum>b.sum;
        else
            if(a.de!=b.de)
                return a.de>b.de;
            else
                return a.xuehao<b.xuehao;
}

int main()
{
    int N,L,H;
    int i;

    scanf("%d%d%d",&N,&L,&H);
    int hege=N;
    for(i=0;i<=N-1;i++)
    {
        scanf("%d%d%d",&s[i].xuehao,&s[i].de,&s[i].cai);
        s[i].sum=s[i].de+s[i].cai;
        if(s[i].de<L||s[i].cai<L)
        {

            s[i].rank=5;
            hege--;
        }
        else
        {
            if(s[i].de>=H&&s[i].cai>=H)
                s[i].rank=1;
            else
                if(s[i].de>=H&& s[i].cai<H)
                    s[i].rank=2;
                else
                    if(s[i].de>=s[i].cai)
                        s[i].rank=3;
                    else
                        s[i].rank=4;
        }

    }
    sort(s,s+N,cmp);
    printf("%d\n",hege);
    for(i=0;i<=hege-1;i++)
        printf("%d %d %d\n",s[i].xuehao,s[i].de,s[i].cai);
    return 0;
}
