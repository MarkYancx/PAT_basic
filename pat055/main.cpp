#include <iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<cstring>

using namespace std;
struct stu
{
    string name;
    int h;
};
bool cmp(stu a,stu b)
{
    if(a.h==b.h)
        return a.name>b.name;
    return a.h<b.h;
}

int main()
{
    int n,k,i=0,j=0;
    cin>>n>>k;
    vector<stu> v;
    string result="";
    for(i=0;i<=n-1;i++)
    {
        stu s;
        cin>>s.name>>s.h;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    int w=n/k;
    for(i=0;i<=k-1;i++)
    {
        int begin=i*w;
        int end=i*w+w;
        if(end+w>n)
            end=n;
        string line="";
        line=v[end-1].name;
        for(j=end-2;j>=begin;j--)
        {
            if(j%2!=end%2)
            {
                line=line+" "+v[j].name;
            }
            else
            {
                line=v[j].name+" "+line;
            }
        }
        result=line+"\n"+result;
    }
    cout<<result;

    return 0;
}
