#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int a[100001];
int dn[100001];
int SSset[100001];
bool SS(int n)
{
    int i;
    if(n==1||n==2)
        return true;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;

    }
    return true;
}

int main()
{
    memset(a,0,sizeof(a));
     memset(dn,0,sizeof(dn));
     memset(SSset,0,sizeof(SSset));
    int i,j;
    for(i=2;i<=100000;i++)
    {
        if(SS(i))
        {
            for(j=i,j=i+j;j<=100000;j=i+j)
            {
                a[j]=1;//ºÏÊý=1
            }
        }
    }

    int N;//
    cin>>N;

    for(i=2,j=1;i<=N;i++)
    {
        if(a[i]==0)
        {
            SSset[j]=i;
            j++;
        }
    }
    j--;
    int count=0;

    for(i=1;i<j;i++)
    {
        dn[i]=SSset[i+1]-SSset[i];
        if(dn[i]==2)
            count++;
    }
    cout<<count;


    return 0;

}
