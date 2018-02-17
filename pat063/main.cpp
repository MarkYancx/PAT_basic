#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int real,imag;
    int i=0;
    int max=0;
    for(i=0;i<=n-1;i++)
    {
        cin>>real>>imag;
        if(real*real+imag*imag>max)
            max=real*real+imag*imag;
    }
    double answer=sqrt(max);
    printf("%.2lf",answer);
    return 0;
}
