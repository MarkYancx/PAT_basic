#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[10000];                   //输入
    //cin>>a;
    cin>>a;



    int i=0;
    int length=strlen(a);
    int b[10000];                     //小数部分
    int c[5];                     //指数部分
    int j=0;
    for(i=3;a[i]!='E';i++)//i=3时。是小数部分第一位
    {
        b[j]=a[i]-'0';
        j++;

    }
    i++;
    int lengthxiaoshu=j;
    char f=a[i];//判断是+还是-
    j=0;
    i++;

    for(;i<=length-1;i++)//指数部分
    {
        c[j]=a[i]-'0';
        j++;
    }
    j--;
    int zhishu=0;
    for(i=0;i<=j;i++)
    {
        zhishu=zhishu*10+c[i];
    }

    if(a[0]=='-')
        cout<<'-';
    if(zhishu==0)                    //指数刚好为0的情况
    {
        for(i=0;a[i]!='E';i++)
            cout<<a[i];
        return 0;
    }
    if(f=='-')
    {
        cout<<0<<'.';
        for(i=1;i<zhishu;i++)
            cout<<0;
        cout<<a[1];
        for(i=0;i<=lengthxiaoshu-1;i++)
            cout<<b[i];
    }
    else
    {
        if(a[1]-'0'!=0)
            cout<<a[1]-'0';
        if(lengthxiaoshu>zhishu)
        {
            for(i=0;i<=zhishu-1;i++)
                cout<<b[i];
            cout<<'.';
            for(;i<=lengthxiaoshu-1;i++)
                cout<<b[i];
        }
        else
        {
            if(lengthxiaoshu==zhishu)
            {
                for(i=0;i<=lengthxiaoshu-1;i++)
                {
                    cout<<b[i];
                }
            }
            else
            {

            for(i=0;i<=lengthxiaoshu;i++)
                cout<<b[i];
            for(i=1;i<zhishu-lengthxiaoshu;i++)
                cout<<0;
            }

        }
    }

        cout<<endl;




    return 0;
}
