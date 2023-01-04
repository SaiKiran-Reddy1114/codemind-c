#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0,s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int avg=s/n;
    for(int k=0;k<n;k++)
    {
        if(a[k]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}