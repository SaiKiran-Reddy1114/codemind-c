#include<stdio.h>
#include<math.h>

int prime(long long int n)
{
    int k=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0&&i!=0)
        k++;
    }
    if(k==1)
    return 1;
    else
    return 0;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(long long int k=1;k<=t;k++)
    {
        long long int n,lt,rt,ld,rd;
        scanf("%lld",&n);
        for(long long int i=n;;i--)
        {
            if(i!=1)
            {
                if(prime(i))
                {
                    lt=i;
                    ld=abs(n-i);
                    break;
                }
            }
        }
        for(long long int i=n;;i++)
        {
            if(i!=1)
            {
                if(prime(i))
                {
                    rt=i;
                    rd=abs(n-i);
                    break;
                }
            }
        }
        if(rd==ld)
        {
            long long int min=lt<rt?lt:rt;
            printf("%lld
",min);
        }
        else if(rd<ld)
        {
            printf("%lld
",rt);
        }
        else
        printf("%lld
",lt);
    }
}