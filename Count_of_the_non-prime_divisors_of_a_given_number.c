#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==1)
            {
                s++;
            }
        }
    }
    printf("%d",s+1);
}