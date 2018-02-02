#include <stdio.h>
#include <stdlib.h>
int  Calculate(int n,int i)
{
    if(n==1)
        return i;
    if(n%2==0)
    {
         i++;
        Calculate(n/2,i);

    }
    else
    {
        i++;
        Calculate((3*n+1)/2,i);

    }
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    printf("%d",Calculate(n,i));
    return 0;
}
