#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char hand[20][20],eye[20][20],month[20][20];
    int hlength=0,elength=0,mlength=0;
    int i=0;
    int ch;
    while((ch=getchar())!='\n')
    {
        if(ch=='[')
        {
            scanf("%[^]]",hand[++hlength]);
        }
    }
        while((ch=getchar())!='\n')
    {
        if(ch=='[')
        {
            scanf("%[^]]",eye[++elength]);
        }
    }
        while((ch=getchar())!='\n')
    {
        if(ch=='[')
        {
            scanf("%[^]]",month[++mlength]);
        }
    }
    int n;
    cin>>n;
    int t[6];
    while(n--)
    {


    cin>>t[1]>>t[2]>>t[3]>>t[4]>>t[5];
    if(t[1]>=1&&t[1]<=hlength&&
       t[2]>=1&& t[2]<=elength&&
        t[3]>=1&&t[3]<=mlength&&
        t[4]>=1&&t[4]<=elength&&
        t[5]>=1&&t[5]<=hlength)
        //if(t[1]>hlength||t[2]>elength||t[3]>mlength||t[4]>elength||t[5]>hlength)
    {
         //cout<<"Are you kidding me? @\\/@"<<endl;
        cout<<hand[t[1]]<<'('<<eye[t[2]]<<month[t[3]]<<eye[t[4]]<<')'<<hand[t[5]]<<endl;
    }
    else
        //cout<<hand[t[1]]<<'('<<eye[t[2]]<<month[t[3]]<<eye[t[4]]<<')'<<hand[t[5]]<<endl;
       cout<<"Are you kidding me? @\\/@"<<endl;
    }
    return 0;
}
