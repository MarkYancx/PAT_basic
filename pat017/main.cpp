#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[1001];
    int b;
    cin>>a>>b;
    int temp=0,i=0;
    int length=strlen(a);
    if(length==1)
    {
        cout<<(a[0]-'0')/b<<' '<<(a[0]-'0')%b;
        return 0;
    }

    for(i=0;i<length-1;i++)
    {
        temp=((a[i]-'0')*10+a[i+1]-'0')/b;
        cout<<temp;
        temp=((a[i]-'0')*10+a[i+1]-'0')%b;
        a[i+1]=temp+'0';
    }
    cout<<' '<<temp;
    return 0;
}
