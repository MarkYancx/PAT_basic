#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    //char a[100000];
    string a;
    char b[100000];
    char c[100000];
    getline(cin, a);                     //注意cin无法读取空行，故使用getline函数
    cin>>b;
    int alength=a.length();
    if(alength==0)
    {
        cout<<b;
        return 0;
    }
    int blength=strlen(b);
    int i=0,j=0;
    for(i=0;i<=alength-1;i++)
    {
        if(a[i]=='+')
            for(j=0;j<=blength-1;j++)
        {
            if(b[j]>='A'&&b[j]<='Z')
                b[j]='*';
        }
        else
        {
            for(j=0;j<=blength-1;j++)
            {
                if(b[j]>='a'&&b[j]<='z')
                {
                    c[j]=b[j]-32;
                    if(a[i]==c[j])
                    {
                        b[j]='*';
                    }
                }
                else
                {
                    if(a[i]==b[j])
                    {
                        b[j]='*';
                    }
                }
            }
        }
    }
    bool blank=1;
    for(i=0;i<=blength-1;i++)
    {
        if(b[i]!='*')
        {
            blank=0;
            break;
        }
    }
    if(blank)
    {
        cout<<endl;
        return 0;
    }
    else
        for(i=0;i<=blength-1;i++)
    {
        if(b[i]!='*')
            cout<<b[i];
    }
    return 0;
}
