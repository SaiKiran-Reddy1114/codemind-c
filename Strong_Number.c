#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r,s=0,m=n;
    while(n>0)
    {
        r=n%10;
        s=s+fact(r);
        n=n/10;
    }
    if(m==s)
    printf("The number %d is a strong number",m);
    else
    {
        printf("The number %d is not a strong number",m);
    }
}