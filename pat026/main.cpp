#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int time=floor((c2-c1)/100.0+0.5);             //ע��/100.0,��������ķ����Ǽ�0.5��floor����������ȡ��
    printf("%02d:%02d:%02d",time/3600,time%3600/60,time%60);


    return 0;
}
