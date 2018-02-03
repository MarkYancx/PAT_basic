#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10];
    int b[50];
    int i=0;
    for(i=0;i<=9;i++)
        cin>>a[i];
    int j=0;
    int count=0;
    int temp;
    for(i=0;i<=9;i++)
    {
        for(j=a[i];j>0;j--)
        {
            b[count]=i;
            count++;
        }

    }
    sort(b,b+count);
    count--;
    for(i=0;i<=count;i++)
    {
        if(b[i]!=0)
        {
            cout<<b[i];
            temp=i;
            break;
        }
    }
    for(i=0;i<=count;i++)
    {
        if(i!=temp)
            cout<<b[i];
    }
    return 0;
}
