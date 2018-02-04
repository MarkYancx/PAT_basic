#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int N;
    char a;
    cin>>N>>a;
    int hang=(int)sqrt((N+1)/2);
    int now=hang;
    int i=0;
    int j=0;
        for(j=1;j<hang;j++)
    {
        for(i=1;i<j;i++)
            cout<<' ';
        for(i=1;i<=now*2-1;i++)
            cout<<a;
        now--;
        cout<<endl;
    }

       for(j=1;j<=hang;j++)
    {
        for(i=1;i<=hang-j;i++)
            cout<<' ';
        for(i=1;i<=j*2-1;i++)
            cout<<a;
        cout<<endl;
    }
    int yu=N-(2*hang*hang-1);
    cout<<yu;
    return 0;
}
