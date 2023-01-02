#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int c=l-1;
    for (int i=0;i<l;i++)
    {
        if(i>=l-3)
        {
            printf("%c",s[c]);
            c--;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}