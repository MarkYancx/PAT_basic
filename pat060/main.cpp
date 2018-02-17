#include <iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int a[1000000];

int main()
{
    int n;
    cin>>n;
    int i=1,answer=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);

    i=1;
    while(answer<=n&&a[i]>i)
    {
        answer++;
        i++;
    }
    cout<<answer;
    return 0;
}
