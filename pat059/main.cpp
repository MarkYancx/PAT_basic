#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int a[10002];
bool isprime(int n)
{
    if(n==2)
        return true;
    else
    {
        int i=2;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}

int main()
{
    memset(a,0,sizeof(a));
    int n;
    cin>>n;
    int i=0;
    int t;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        a[t]=i;
    }
    int k;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        cin>>t;
        if(a[t]==0)//cout<<setfill('0')<<setw(4)<<4<<endl;
        {
            cout<<setfill('0')<<setw(4)<<t;
            cout<<": Are you kidding?"<<endl;
            continue;
        }
        if(a[t]==1)
        {
            cout<<setfill('0')<<setw(4)<<t;
            cout<<": Mystery Award"<<endl;
            a[t]=-1;
            continue;
        }
        if(a[t]==-1)
        {
            cout<<setfill('0')<<setw(4)<<t;
            cout<<": Checked"<<endl;
            continue;
        }
        if(isprime(a[t]))
        {
            cout<<setfill('0')<<setw(4)<<t;
            cout<<": Minion"<<endl;
            a[t]=-1;
            continue;
        }
        if(!isprime(a[t]))
        {
            cout<<setfill('0')<<setw(4)<<t;
            cout<<": Chocolate"<<endl;
            a[t]=-1;
            continue;
        }
    }
    return 0;
}
