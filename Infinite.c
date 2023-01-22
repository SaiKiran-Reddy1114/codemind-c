#include<stdio.h>

int main()
{
    int n;
    
    for(int i=1;;i++)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        printf("%d
",n*n);
    }
}