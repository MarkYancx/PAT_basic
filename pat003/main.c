#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*int Calculate(char* a[])
{
    int countP=0;
    int countT=0;
    int indexP=0;
    int indexT=0;
    int i;
    int length=strlen(a);
    for(i=0;i<=length-1;i++)
    {
        if(a[i]!='P'&&a[i]!='A'&&a[i]!='T')
        {
            return 0;
        }
        if(a[i]=='P')
        {
            countP++;
            if(countP>=2)
                return 0;
        }
         if(a[i]=='T')
        {
            countT++;
            if(countT>=2)
                return 0;
        }
    }
    for(i=0;a[i]!='P';i++)
    {
        indexP++;
    }

    for(i=0;a[i]!='T';i++)
    {
        indexT++;
    }
    if((indexT-indexP-1)*(indexP)==length-indexT-1)
        return 1;
    else
        return 0;

}*/
int main()
{
    int n;
    char a[101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
         int countP=0;
    int countT=0;
    int indexP=0;
    int indexT=0;
    int i;
    int flag=1;
    int length=strlen(a);
    for(i=0;i<=length-1;i++)
    {
        if(a[i]!='P'&&a[i]!='A'&&a[i]!='T')
        {
            flag =0;
        }
        if(a[i]=='P')
        {
            countP++;
            if(countP>=2)
                flag= 0;
        }
         if(a[i]=='T')
        {
            countT++;
            if(countT>=2)
                flag= 0;
        }
    }
    for(i=0;a[i]!='P';i++)
    {
        indexP++;
    }

    for(i=0;a[i]!='T';i++)
    {
        indexT++;
    }
    if(flag)
    {


    if((indexT-indexP-1)*(indexP)==length-indexT-1)
        flag= 1;
    else
        flag =0;
    }
    if(indexT-indexP==1)
        flag=0;
        if(flag)
             printf("YES\n");
        else
             printf("NO\n");
    }
    return 0;
}
