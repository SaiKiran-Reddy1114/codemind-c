#include<stdio.h>
int main()
{
    int i,n,sum=0,e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            sum=1;
            break;
        }
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}