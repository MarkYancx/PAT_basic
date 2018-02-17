#include <iostream>
#include<string.h>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    //char a[100001];
    string a;

    getline(cin,a);
    int sum=0;
    int length=a.length();
    int i=0;
    for(i=0;i<=length-1;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            sum=sum+a[i]-64;
        }
        if(a[i]>='a'&&a[i]<='z')
        {
            sum=sum+a[i]-96;
        }
    }
    int count0=0,count1=0;
    if(sum==0)
    {
        cout<<0<<' '<<0;
        return 0;
    }
    while(sum!=0)
    {
        if(sum%2==0)
        {
            count0++;
        }
        if(sum%2==1)
        {
            count1++;
        }
        sum=sum/2;
    }
    cout<<count0<<' '<<count1;

    return 0;
}
