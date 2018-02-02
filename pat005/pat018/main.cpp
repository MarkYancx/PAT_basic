#include <iostream>

using namespace std;
int jiaW=0,jiaL=0,yiW=0,yiL=0,Ping=0;
int jiaB=0,jiaC=0,jiaJ=0;
int yiB=0,yiC=0,yiJ=0;
int max(int a,int b,int c)
{
    int m=a;
    if(b>a)
        m=b;
    if(c>m)
        m=c;
    return m;

}
void Calculate(char a,char b)
{
    if(a==b)
        Ping++;
    else
    {
        if(a=='B'&&b=='J')
        {
            jiaL++;
            yiW++;
            yiJ++;

        }
        if(a=='B'&&b=='C')
        {
            jiaW++;
            yiL++;
            jiaB++;

        }
        if(a=='J'&&b=='B')
        {
            jiaW++;
            yiL++;
            jiaJ++;

        }
        if(a=='J'&&b=='C')
        {
            jiaL++;
            yiW++;
            yiC++;

        }
        if(a=='C'&&b=='B')
        {
            jiaL++;
            yiW++;
            yiB++;

        }
        if(a=='C'&&b=='J')
        {
            jiaW++;
            yiL++;
            jiaC++;

        }

    }
}

int main()
{
    int N;
    char a,b;
    cin>>N;
    int i=0;
    for(i=0;i<=N-1;i++)
    {
        cin>>a>>b;
        Calculate(a,b);
    }
    cout<<jiaW<<' '<<Ping<<' '<<jiaL<<endl;
    cout<<yiW<<' '<<Ping<<' '<<yiL<<endl;
    if(max(jiaB,jiaC,jiaJ)==jiaB)
        cout<<'B'<<' ';
    else
        if(max(jiaB,jiaC,jiaJ)==jiaC)
            cout<<'C'<<' ';
        else
            if(max(jiaB,jiaC,jiaJ)==jiaJ)
                cout<<'J'<<' ';
    if(max(yiB,yiC,yiJ)==yiB)
        cout<<'B';
    else
        if(max(yiB,yiC,yiJ)==yiC)
            cout<<'C';
        else
            if(max(yiB,yiC,yiJ)==yiJ)
                cout<<'J';




    return 0;
}
