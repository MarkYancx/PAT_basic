#include <iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;
struct student
{
    char name[100];
    char xuehao[100];
    int fen;
};
int cmp(const void *a,const void *b)
{
    student c=*(student*)a;
    student d=*(student*)b;
    return c.fen-d.fen;
}

int main()
{
    int n;
    cin>>n;
    student a[n];
    int i;


    for(i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].xuehao>>a[i].fen;
        /*scanf("%s",a[i].name);
        scanf("%s",a[i].xuehao);
        scanf("%d",&a[i].fen);*/

    }
    qsort(a,n,sizeof(a[0]),cmp);
    cout<<a[n-1].name<<" "<<a[n-1].xuehao<<endl;
    cout<<a[0].name<<" "<<a[0].xuehao<<endl;


    return 0;
}
