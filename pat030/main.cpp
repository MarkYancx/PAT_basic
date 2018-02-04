#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N,p;
    cin>>N>>p;
long long int a[N];
int i=0,j=0;
for(i=0;i<=N-1;i++)
    cin>>a[i];
sort(a,a+N);
int count=0;
for(i=0,j=0;i<=N-1&&j<=N-1;i++)
{
    while(j<=N-1&&a[i]*p>=a[j])
        j++;
    if(count<j-i)
        count=j-i;
}
cout<<count;

}
