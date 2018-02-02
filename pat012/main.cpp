#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[N];
    int i=0,j;
    int A1=0,A2=0,A3=0,A5=0;
    double A4=0;
    int countA2=0,countA4=0,flag=-1;
    int flag2=0;
    for(i=0;i<=N-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0&&a[i]%5==0)
            A1=A1+a[i];
        if(a[i]%5==1)
        {
            flag=-1;
            for(j=0;j<=countA2;j++)
                flag=flag*(-1);
            A2=A2+a[i]*flag;
            countA2++;
            flag2=1;
        }
        if(a[i]%5==2)
        {
            A3++;
        }
        if(a[i]%5==3)
        {
            A4=A4+a[i];
            countA4++;
        }
        if(a[i]%5==4)
        {
            if(a[i]>A5)
                A5=a[i];
        }
    }
    A4=A4/countA4;
    if(A1==0)
        printf("N");
    else
        printf("%d",A1);
    if(flag2==0)
        printf(" N");
    else
        printf(" %d",A2);
    if(A3==0)
        printf(" N");
    else
        printf(" %d",A3);
    if(countA4==0)
        printf(" N");
    else
        printf(" %.1f",A4);
    if(A5==0)
        printf(" N");
    else
        printf(" %d",A5);







    return 0;
}
