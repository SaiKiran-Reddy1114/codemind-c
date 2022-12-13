
#include<stdio.h>
int main()
{
    int s,h,m,rs;
    scanf("%d",&s);
    h=s/3600;
    rs=s%3600;
    m=rs/60;
    s=rs%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}
