#include <iostream>

using namespace std;

int main()
{
   int n,i=0,j=0;
   cin>>n;
   int a[n];
   for(i=0;i<=n-1;i++)
   {
       cin>>a[i];
   }
   int sum=0;
   for(i=0,j=0;i<=n-1;i++)
   {
       for(j=0;j<=n-1;j++)
       {
           if(i==j)
           {
               continue;
           }
           sum=10*a[i]+a[j]+sum;
       }
   }
   cout<<sum;
    return 0;
}
