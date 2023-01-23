#include<stdio.h>
int main()
{
    int n,sq,r;
    scanf("%d",&n);
    sq=n*n;
    int rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int x;
    x=rev*rev;
    int y=0;
    while(x>0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    if(y==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}