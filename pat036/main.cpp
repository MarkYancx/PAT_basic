#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    int i=0;
    int lie=floor(n/2.0+0.5);//n/2.0зЂвт

    for(i=0;i<=n-1;i++)
        cout<<c;
    cout<<endl;
    lie--;
    while(lie>=2)
    {
        cout<<c;
        for(i=1;i<=n-2;i++)
            cout<<' ';
        cout<<c;
        cout<<endl;
        lie--;

    }
        for(i=0;i<=n-1;i++)
        cout<<c;


    return 0;
}
