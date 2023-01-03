#include<stdio.h>
int main()
{
    int n,q,r,p=1,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        p=p*r;
        s=s+r;
        q=q/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}