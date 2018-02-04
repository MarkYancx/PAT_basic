#include <iostream>
#include<string.h>

using namespace std;

int main()
{
     char a[81];
     char b[81];
    char break_[81];
    cin>>a>>b;
    int lengtha=strlen(a);

    int i=0,j=0,k=0;
    for(i=0;i<=lengtha-1;i++)
    {
        if(a[i]!=b[j])
        {
            break_[k]=a[i];
            if(break_[k]>='a'&&break_[k]<='z')
                break_[k]=break_[k]-32;
            k++;
            continue;
        }
        j++;
    }
    cout<<break_[0];
    for(i=1;i<=k-1;i++)
    {

        int flag=1;
        int t=i;
        for(int x=0;x<t;x++)
        {
            if(break_[t]==break_[x])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<break_[i];

    }
    return 0;
}
