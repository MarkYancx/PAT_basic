#include <iostream>
#include<string.h>
#include<math.h>
#include<string>
#include<cstdio>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int i=0,j=0,k=0;
    string a[13]={"tret","jan" ,"feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string b[12]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    getchar();
    string t;

    string p="";

    for(i=0;i<=n-1;i++)
    {
          int sum=0;
        getline(cin,t);
        if(t[0]>='0'&&t[0]<='9')
        {
            for(j=0;j<=t.size()-1;j++)
                sum=sum*10+t[j]-'0';
            if(sum<13)
            {
                cout<<a[sum]<<endl;
            }
            else
            {
                if(sum%13==0)
                    cout<<b[sum/13-1]<<endl;
                else
                    cout<<b[sum/13-1]<<' '<<a[sum%13]<<endl;

            }

        }
        else
        {
            for(k=0;k<=t.size()-1;k=k+4)
            {
                p=p+t[k+0]+t[k+1]+t[k+2];
                for(j=0;j<=12;j++)
                {
                    if(p==a[j])
                        sum=sum+j;
                    if(p==b[j])
                        sum=sum+(j+1)*13;
                }
                p="";
            }
            cout<<sum<<endl;

        }

    }



    return 0;
}
