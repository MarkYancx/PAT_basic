#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int a[N];
    for(int i=0;i<=N-1;i++)
        cin>>a[i];
    if(M%N==0)
    {
        cout<<a[0];
        for(int i=1;i<=N-1;i++)
            cout<<' '<<a[i];
        return 0;
    }
    M=M%N;
    for(int i=1;i<=M;i++)
    {
        int temp=a[N-1];
        for(int j=N-1;j>0;j--)
            a[j]=a[j-1];
        a[0]=temp;
    }
    cout<<a[0];
        for(int i=1;i<=N-1;i++)
            cout<<' '<<a[i];

    return 0;
}
