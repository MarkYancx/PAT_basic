/*#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    char a[101],b[101];
    cin>>a>>b;
    int lengtha=strlen(a);
    int lengthb=strlen(b);
    int i=0,j=0,k=lengthb,temp=0,q=0;
    for(i=0,j=0;i<=lengthb-1;i++)
    {
        if(lengtha-q>lengthb)
        {
            q++;
            i--;
            cout<<'0';
            continue;
        }
        if(lengthb-j>lengtha)
        {
            cout<<b[j]-'0';
            j++;
            k--;
        }
        else
        {
            if(k%2==0)
            {
                if(b[i]-a[q]<0)
                {
                    cout<<b[i]-a[q]+10;
                }
                else
                {
                    cout<<b[i]-a[q];
                }
                k--;
            }
            else
            {
                temp=a[q]-'0'+b[i]-'0';
                temp=temp%13;
                if(temp==10||temp==11||temp==12)
                {


                if(temp==10)cout<<'J';
                if(temp==11)cout<<'Q';
                if(temp==12)cout<<'K';
                }
                else
                {
                    cout<<temp;
                }
                k--;

            }
            q++;
        }
    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[101],buf_b[203],*b=buf_b+100,pattern[14]="0123456789JQK";
	int i,length,a_length,b_length,a_num,b_num;
	scanf("%s%s",a,b);
	a_length=strlen(a);
	b_length=strlen(b);
	for(i=1;i<=a_length;i++)
	{
		a_num=a[a_length-i]-'0';
		b_num=b[b_length-i]-'0';
		if(b_length<i)
		{
			b_num=0;
		}
		if(i%2)
		{
			b_num+=a_num;
			b_num%=13;
		}
		else
		{
			b_num-=a_num;
			if(b_num<0)
			{
				b_num+=10;
			}
		}
		b[b_length-i]=pattern[b_num];
	}
	if(b_length<a_length)
	{
		printf("%s\n",b+b_length-i+1);
	}
	else
	{
		printf("%s\n",b);
	}
}
