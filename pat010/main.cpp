#include <iostream>

using namespace std;

int main()
{
    int a[2000];
    int i=0;
    while(cin>>a[i])
    {
        i++;
    }

    i--;
    int t=i;
    for(i=0;i<t;i=i+2)
    {
        a[i]=a[i]*a[i+1];
        a[i+1]--;
    }
    cout<<a[0];
    for(i=1;i<t;i++)
    {
        if(i%2==0&&a[i]==0&&a[i+1]!=0)
        {
            i++;
            continue;
        }
        if(i%2==0&&a[i]==0&&a[i+1]==0)
        {
            i++;
            cout<<' '<<0<<' '<<0;

            continue;
        }
        cout<<' '<<a[i];
    }
    if(i!=t)
    {
        return 0;
    }

    cout<<' '<<a[i];
    return 0;
}
