#include<stdio.h>

int main()
{
    int n,s1=0,s2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s1=s1+(i*i);
        s2=s2+i;
    }
    s2=s2*s2;
    printf("%d",s2-s1);
    
}