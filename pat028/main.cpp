#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
   int N;
    cin>>N;
   char name[6];
   int year,month,day;
   int Max=20140906;
   int Min=18140906;
   int count=0;
   int birth=0;
    string maxname;
    string minname;
   int maxbirth=0;
   int minbirth=20140907;


   while(N--)
   {
    scanf("%s %d/%d/%d",name,&year,&month,&day);
    birth=year*10000+month*100+day;
    if(birth>=Min&&birth<=Max)
    {
        if(birth>=maxbirth)
        {
            maxbirth=birth;
            minname=name;
        }

        if(birth<=minbirth)
        {
            minbirth=birth;
            maxname=name;
        }
        count++;

    }
   }
   if(count==0)
   {
       cout<<0;
       return 0;
   }
   cout<<count<<' '<<maxname<<' '<<minname;
    return 0;
}
