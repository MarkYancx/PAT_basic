#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int n,count=0;
    char a[50],b[50];
    double temp,sum=0.0;
    cin>>n;
    int i=0,j=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%s",a);
        sscanf(a,"%lf",&temp);
        sprintf(b,"%.2lf",temp);
        int flag=0;
        for(j=0;j<=strlen(a)-1;j++)
        {
            if(a[j]!=b[j])
                flag=1;

        }
        if(flag==1||temp<-1000||temp>1000)
        {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        }
        else
        {
            sum=sum+temp;
            count++;
        }
    }

    if(count==1)
        printf("The average of 1 number is %.2lf", sum);
    else
    {
        if(count>1)
        {
            printf("The average of %d numbers is %.2lf", count, sum / count);
        }
        else
        {
            printf("The average of 0 numbers is Undefined");
        }
    }

    return 0;
}
