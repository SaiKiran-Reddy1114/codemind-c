#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a-i-1; j++)
        {
            printf(" ");
        }
        for (j=0; j<a; j++)
        {
            if (i==0 || i==a-1)
            {
                printf("*");
            }
            else
            {
                if (j==0 || j==a-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("
");
    }
    return 0;
}