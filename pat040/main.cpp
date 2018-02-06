#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char c[100001];
    cin>>c;
    int length=strlen(c);
    long long int count=0;
   /* int flag=0;
    for(i=0;i<=length-1;i++)
    {
        if(c[i]=='P'&&flag==0)
        {
            flag=1;
            for(j=i+1;j<=length-1;j++)
            {
                if(c[j]=='A'&&flag==1)
                {
                    flag=2;
                    for(k=j+1;k<=length-1;k++)
                    {
                        if(c[k]=='T'&&flag==2)
                        {
                            count++;
                        }
                    }
                    flag=1;
                }
            }
        }
        flag=0;
    }*/                  //暴力大魔王，很容易想，但是6个测试点过不去
    long long int nAT=0,nPAT=0;
    while(length>0)
    {
        length--;
        if(c[length]=='T')nAT++;
        else
            if(c[length]=='A')nPAT=nPAT+nAT;
            else
            count=count+nPAT;

    }
    cout<<count%1000000007;
    return 0;
}
