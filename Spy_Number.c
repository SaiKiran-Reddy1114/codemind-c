#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,mul=1,r;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}