#include <iostream>
#include<algorithm>

using namespace std;
struct student
{
    char a[20];
    int shiji;
    int kaoshi;
};
bool cmp(student a,student b)
{
    return a.shiji<b.shiji;
}

int main()
{
   int n;
   cin>>n;
   student s[n];
    int i=0;
    for(i=0;i<=n-1;i++)
    {
        cin>>s[i].a>>s[i].shiji>>s[i].kaoshi;
    }
    int m;
    sort(s,s+n,cmp);
    int t;
    cin>>m;
    for(i=0;i<=m-1;i++)
    {
        cin>>t;
        cout<<s[t-1].a<<' '<<s[t-1].kaoshi<<endl;
    }

}
