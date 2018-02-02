#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[101];
    scanf("%s",a);
    int length=strlen(a);
    int b[length];
    int sum=0;
    int i;
    for(i=0;i<length;i++)
    {
        b[i]=a[i]-48;
        sum=sum+b[i];
    }
    char *s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int c[101];
    i=0;
    while(sum!=0)
    {
        c[i]=sum%10;
        sum=sum/10;
        i++;
    }
    i--;
    printf("%s",s[c[i]]);
    i--;
    for(;i>=0;i--)
    {
        printf(" %s",s[c[i]]);
    }

    return 0;
}
