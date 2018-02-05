#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   int N,i=0,j=0;
      cin>>N;
   string a[N];

   for(i=0;i<=N-1;i++)
   {
       cin>>a[i];
   }
   int flag[N];
   int count=N;
   memset(flag,0,sizeof(flag));
   for(i=0;i<=N-1;i++)
   {
       for(j=0;j<=16;j++)
       {
           if(a[i][j]-'0'<=9&&a[i][j]-'0'>=0)
           {
               continue;
           }
           flag[i]=1;
           count--;
           break;
       }
   }


   int t[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
   char M[]={'1','0','X','9' ,'8', '7', '6', '5', '4', '3', '2'};
   int sum=0;
   for(i=0;i<=N-1;i++)
   {
       if(!flag[i])
       {
           for(j=0;j<=16;j++)
           {
               sum=sum+t[j]*(a[i][j]-'0');
           }
           sum=sum%11;
           if(M[sum]==a[i][17])
           {
               flag[i]=0;
           }
           else
           {
               flag[i]=1;
               count--;
           }
           sum=0;
       }
   }
   if(count==N)
   {
       cout<<"All passed";
   }
   else
   {
       for(i=0;i<=N-1;i++)
       {
           if(flag[i])
            cout<<a[i]<<endl;
       }
   }

    return 0;
}
