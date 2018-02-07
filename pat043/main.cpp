#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[10001];
    cin>>a;
    int i=0;
    int length=strlen(a);
    int count[6]={0,0,0,0,0,0};
    int tot=0;
    for(i=0;i<=length-1;i++)
    {
        if(a[i]=='P'){count[0]++;tot++;}
        if(a[i]=='A') {count[1]++;tot++;}
        if(a[i]=='T') {count[2]++;tot++;}
        if(a[i]=='e') {count[3]++;tot++;}
        if(a[i]=='s') {count[4]++;tot++;}
        if(a[i]=='t') {count[5]++;tot++;}
    }
    while(tot)
    {
        if(count[0]){cout<<'P';count[0]--;tot--;}
          if(count[1]){cout<<'A';count[1]--;tot--;}
            if(count[2]){cout<<'T';count[2]--;tot--;}
              if(count[3]){cout<<'e';count[3]--;tot--;}
                if(count[4]){cout<<'s';count[4]--;tot--;}
                  if(count[5]){cout<<'t';count[5]--;tot--;}
    }
    return 0;
}
