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
   int  a[4];
   int N;
   int p[4]={6,1,7,4};
   int  temp[4]={0,0,0,0},big[4],small[4];
   int i=0;

   cin>>N;
   for(i=0;i<=3;i++)
   {
    a[3-i]=N%10;
    N=N/10;
   }
   i=0;
   if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
   {
    for(i=0;i<=3;i++)
        cout<<a[i];
    cout<<' '<<'-'<<' ';
    for(i=0;i<=3;i++)
        cout<<a[i];
   cout<<' '<<'='<<' '<<"0000";
   }
    else
    {
        while(temp[0]!=p[0]||temp[1]!=p[1]||temp[2]!=p[2]||temp[3]!=p[3])
        {

            sort(a,a+4,cmp);
            memcpy(big,a,sizeof(a));
            sort(a,a+4);
            memcpy(small,a,sizeof(a));
            for(i=3;i>=0;i--)
            {
                temp[i]=big[i]-small[i];

            }
            for(i=3;i>0;i--)
            {
                if(temp[i]<0)
                {
                    temp[i]=temp[i]+10;
                    temp[i-1]--;
                }
            }
            /*if(big[i]==small[i])
                temp[i]=0;
            else
                temp[i]=big[i]-small[i];*/
            for(i=0;i<=3;i++)
                cout<<big[i];
            cout<<' '<<'-'<<' ';
            for(i=0;i<=3;i++)
                cout<<small[i];
            cout<<' '<<'='<<' ';
            for(i=0;i<=3;i++)
                cout<<temp[i];
                cout<<endl;
            memcpy(a,temp,sizeof(temp));
        }


    }


    return 0;
}
