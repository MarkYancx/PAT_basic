#include <iostream>
#include   <stdio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    double a[n];
    double sum=0;
    int i=0;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+(n-i)*a[i]*(i+1);
    }
    //cout<<fixed<<setprecision(2)<<sum;
    printf("%.2lf",sum);




    return 0;
}
