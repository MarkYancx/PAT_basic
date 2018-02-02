#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;
int Calculate(char a[],int Da,char b[],int Db)
{
    int PA=0,PB=0;
    int temp=1;
    int countA=0,countB=0;
    int lengthA=strlen(a);
    int lengthB=strlen(b);
    int i=0,j=0;
    for(i=0;i<=lengthA-1;i++)
    {
        if(a[i]-'0'==Da)
            countA++;
    }
    for(i=1;i<=countA;i++)
    {
        temp=1;
        for(j=1;j<i;j++)
        temp=temp*10;

        PA=(int)PA+(int)Da*temp;

    }
     for(i=0;i<=lengthB-1;i++)
    {
        if(b[i]-'0'==Db)
            countB++;
    }
    for(i=1;i<=countB;i++)
    {
        temp=1;
        for(j=1;j<i;j++)
        temp=temp*10;

        PB=(int)PB+(int)Db*temp;
       // PB=(int)PB+(int)Db*pow(10,i-1);精度出问题，399却输出398

    }
    return PA+PB;

}

int main()
{
    char a[15],b[15];
    int DA,DB;
    cin>>a>>DA>>b>>DB;
    cout<<Calculate(a,DA,b,DB);
    return 0;
}
