#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a1,a2,b1,b2;
    int counta=0,countb=0;
    while(n--)
    {
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2&&a1+b1!=b2)
            counta++;
        if(a1+b1!=a2&&a1+b1==b2)
            countb++;
    }
    cout<<countb<<' '<<counta;
    return 0;
}
