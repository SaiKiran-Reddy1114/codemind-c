#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    scanf("%d",&n);
    int c=0;
    while(n>c)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n-a<b-n)
    {
        printf("%d",a);
    }
    else if(n-a==b-n)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d",b);
    }
}