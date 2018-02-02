#include <iostream>
#include<algorithm>
#include<string.h>

using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int a[102];
    memset(a,-1,sizeof(a));
    int b[102];
    int n,t,i,temp,j;
    cin>>n;
    while(n--)
    {
        cin>>t;
        a[t]=0;
    }
    for(i=1;i<=100;i++)
    {
        if(a[i]==0)
        {
            temp=i;
                while(temp!=1)
            {
                if(temp%2==0)
                {
                    temp=temp/2;
                    a[temp]=1;
                }
                else
                {
                    temp=(temp*3+1)/2;
                    a[temp]=1;
                }
            }
        }
    }
    for(i=1,j=1;i<=100;i++)
    {
        if(a[i]==0)
        {
            b[j]=i;
            j++;
        }
    }
    j--;
    sort(b+1,b+j+1,cmp);
    cout<<b[1];
    for(i=2;i<=j;i++)
        cout<<" "<<b[i];
    return 0;

}
