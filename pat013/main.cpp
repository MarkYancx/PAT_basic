#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int a[110001];
int SSset[110001];
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
     memset(SSset,0,sizeof(SSset));
    int i,j;
    for(i=2;i<=110000;i++)
    {
        if(SS(i))
        {
            for(j=i,j=i+j;j<=110000;j=i+j)
            {
                a[j]=1;//
            }
        }
    }


    for(i=2,j=1;i<=110000;i++)
    {
        if(a[i]==0)
        {
            SSset[j]=i;
            j++;
        }
    }
    int M,N;
    cin>>M>>N;
    int count=0;
    for(i=M;i<=N;i++)
    {
        if(count==0)
        {
            cout<<SSset[i];
            count++;
        }
        else
        {
            cout<<' '<<SSset[i];
            count++;
        }
        if(count==10)
        {
            cout<<endl;
            count=0;
        }
    }






    return 0;

}
