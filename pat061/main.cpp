#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int fen[m];
    int ranswer[m];
    int i=0;
    int s[n];
    for(i=0;i<=m-1;i++)
    {
        cin>>fen[i];

    }
    for(i=0;i<=m-1;i++)
    {
        cin>>ranswer[i];

    }
    int j=0;
    int t;
    for(i=0;i<=n-1;i++)
    {
        s[i]=0;
        for(j=0;j<=m-1;j++)
        {
            cin>>t;
            if(t==ranswer[j])
            {
                s[i]=s[i]+fen[j];
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
