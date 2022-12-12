#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
   // int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int  sum=0,esum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            esum=esum+a[i];
        }
    }
    int d;
    d=abs(sum-esum);
    printf("%d",d);
}