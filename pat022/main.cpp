#include <iostream>


using namespace std;

int main()
{
   int A,B,D;
   int a[1000]={0};
   cin>>A>>B>>D;
   int sum=A+B;
   if(sum==0)       //Ҫ����A=B=0�������Ҳ����ɾ��ʹ��do-while��䡣
   {
       cout<<0;
       return 0;
   }
   int count=0;
   int i=0;
   while(sum!=0)
   {
       a[i]=sum%D;
       sum=sum/D;
       count++;
       i++;
   }
   count--;
   for(i=count;i>=0;i--)
    cout<<a[i];
    return 0;
}
