#include <iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{
    int i=0,j=0,flag=1;
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string date;
    int hourset[24];
    for(i=0;i<=23;i++)
        hourset[i]=i;
    int hour,minute;
    char A1[61];
    char A2[61];
    char A3[61];
    char A4[61];
    cin>>A1>>A2>>A3>>A4;
    int length1=strlen(A1);
    int length2=strlen(A2);
    int length3=strlen(A3);
    int length4=strlen(A4);

    for(i=0;i<=length1-1;i++)
    {
        for(j=0;j<=length2-1;j++)
        {
            if(A1[i]==A2[j]&&A1[i]>='A'&&A1[i]<='G'&&flag==1&&i==j)
            {
                date=week[A1[i]-'A'];
                flag++;
                break;

            }
            if(A1[i]==A2[j]&&(A1[i]>='0'&&A1[i]<='9'||A1[i]>='A'&&A1[i]<='N')&&flag==2&&i==j)
            {
                if(A1[i]>='0'&&A1[i]<='9')
                    hour=hourset[A1[i]-'0'];
                if(A1[i]>='A'&&A1[i]<='N')
                    hour=hourset[A1[i]-'A'+10];
                flag++;
                break;


            }


        }
        if(flag==3)
            break;
    }
    int flagMinute=0;
    for(i=0;i<=length3-1;i++)
    {
        for(j=0;j<=length4-1;j++)
        {
            if(A3[i]==A4[j]&&(A3[i]>='a'&&A3[i]<='z'||A3[i]>='A'&&A3[i]<='Z')&&i==j)
            {
                minute=j;
                flagMinute=1;
                break;
            }

        }
        if(flagMinute==1)
            break;

    }
    cout<<date<<' '<<setw(2)<<setfill('0')<<hour<<':'<<setw(2)<<setfill('0')<<minute;

    return 0;
}
