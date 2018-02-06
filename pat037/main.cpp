#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{   //     17 29
    int G1,S1,K1,G2,S2,K2;
    scanf("%d.%d.%d %d.%d.%d",&G1,&S1,&K1,&G2,&S2,&K2);
    int sum1=K1+S1*29+G1*29*17;
    int sum2=K2+S2*29+G2*29*17;
    if(sum1-sum2>0)
    {
        int sum3=sum1-sum2;
        cout<<'-'<<sum3/(17*29)<<'.'<<sum3/29%17<<'.'<<sum3%29;
    }
    else
    {
        int sum3=sum2-sum1;
        cout<<sum3/(17*29)<<'.'<<sum3/29%17<<'.'<<sum3%29;
    }
    return 0;
}
