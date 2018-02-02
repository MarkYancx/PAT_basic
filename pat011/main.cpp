#include <iostream>

using namespace std;

int main()
{
    int N;
    int i=1;
    cin>>N;
    long long a,b,c;
    while(N--)
    {
        cin>>a>>b>>c;
        if(a+b>c)
            cout<<"Case #"<<i<<": true"<<endl;
        else
            cout<<"Case #"<<i<<": false"<<endl;
        i++;
    }
    return 0;
}
