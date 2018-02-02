#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nG,nS,nB;
    nG=n%10;
    n=n/10;
    nS=n%10;
    n=n/10;
    nB=n%10;
    for(int i=0;i<nB;i++)
        cout<<'B';
    for(int i=0;i<nS;i++)
        cout<<'S';
    for(int i=1;i<=nG;i++)
        cout<<i;
    return 0;
}
