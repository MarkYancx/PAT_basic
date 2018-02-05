#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int N;
   cin>>N;
   vector<int> a(N),b(N);
   int i=0;
   for(i=0;i<=N-1;i++)
   {
    cin>>a[i];
   }
   for(i=0;i<=N-1;i++)
   {
       cin>>b[i];
   }
   int index=-1;
   for(i=1;i<=N-1;i++)
   {
    if(b[i-1]>b[i])
    {
        index=i;
        break;
    }
   }
   int flag=0;
   for(i=index;i<=N-1;i++)
   {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   {
       cout<<"Insertion Sort"<<endl;
       sort(b.begin(),b.begin()+index+1);
       cout<<b[0];
       for(i=1;i<=N-1;i++)
       {
           cout<<' '<<b[i];
       }
   }
   else
   {
       cout<<"Merge Sort"<<endl;
       int k=1;
       bool t=true;
       while(t)
       {
           t=false;
           if(!equal(a.begin(),a.end(),b.begin()))
           {
               t=true;
           }
           k=k*2;
           for(i=0;i<N/k;i++)           //¹é²¢ÅÅÐò
           {
               sort(a.begin()+i*k,a.begin()+(i+1)*k);

           }
           sort(a.begin()+k*(N/k),a.end());
       }
       cout<<a[0];
       for(i=1;i<=N-1;i++)
       {
           cout<<' '<<a[i];
       }
   }

    return 0;
}
