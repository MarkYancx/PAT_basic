#include <iostream>
#include <algorithm>
#include<stdio.h>

using namespace std;
struct node
{
    int address;
    int data;
    int next;
};

int main()
{
    int first,N,K;
    cin>>first>>N>>K;
    int data[100000],next[100000],list[100000];
    int i=0;
    int temp;
    for(i=0;i<=N-1;i++)
    {
        cin>>temp;
        cin>>data[temp]>>next[temp];
    }
    int sum=0;
    while(first!=-1)
    {
        list[sum]=first;
        first=next[first];
        sum++;
    }
    for (int i=0;i<(sum-sum%K);i+=K)
    {
        reverse(list+i, list+i+K);
    }
    for (int i=0;i<sum-1;i++)
    {
        printf("%05d %d %05d\n",list[i],data[list[i]],list[i + 1]);
    }
    printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
    return 0;
}
