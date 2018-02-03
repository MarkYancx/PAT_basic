#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char N[1001];
    cin>>N;
    int length=strlen(N);
    int i=0;
    int count[10];
    memset(count,0,sizeof(count));
    for(i=0;i<=length-1;i++)
    {
        count[(N[i]-'0')]++;
    }
    for(i=0;i<=9;i++)
    {
        if(count[i]!=0)
        cout<<i<<':'<<count[i]<<endl;
    }

    return 0;
}
