#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int n,D;
  double e;
  cin>>n>>e>>D;
  int day;
    int i=0,j=0;
    double t;
    int count_tot1=0,count_tot2=0;
    for(i=0;i<=n-1;i++)
    {

        int count=0;
        cin>>day;
        int temp=day;
        while(temp--)
        {
            cin>>t;
            if(t<e)
            {
                count++;
            }
        }
        if(day/2<count)
        {
            if(day>D)
            count_tot2++;
            else
            count_tot1++;
        }



    }


    double x1=(double)count_tot1/n*100,x2=(double)count_tot2/(double)n*100;
    printf("%.1lf%% %.1lf%%",x1,x2);
    return 0;
}
