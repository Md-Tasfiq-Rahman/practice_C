#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char c;
    gets(s);
    int l,i,a=0,j,b=0;
    l=strlen(s);
    for(i=0;i<=l-1;i++)
    {
        b=a;
        a=0;

        for(j=0;j<=l-1;j++)
        {
            if(s[i]==s[j])
            {
                a++;

            }
        }
        if(a>=b)
        {
            c=s[i];
        }
        else
        {
            c=c;
        }
    }
    printf("-%c",c);
    return 0;

}
