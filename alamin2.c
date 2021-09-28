#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    gets(s);
    int i,j=0,l;
    l=strlen(s);

    for(i=0;i<=l;i++)
    {
        if(s[i]==32||s[i]==0) // 32  holo space er ascii , 0 holo null er ascii
        {
            j++;

        }
    }
   // printf("%d",j);
    char t[j][100];
    int x=0,y=0;
    i=0;
    for(;y<=l;)
    {
        if(s[y]==0||s[y]==32)
        {
            y++;
            t[i][x]=0;
            x=0;
            i++;
            //continue;
        }
        else
        {

         t[i][x]=s[y];
        // printf("%c %c \n",t[i][x],s[y]);
         y++;
         x++;

        }
    }
   /* for(i=0;i<j;i++)
    {
        printf("%s\n",t[i]);
    }
    */
    printf("%d\n",j);
    float d=0.0;
    for(i=0;i<j;i++)
    {
        l=strlen(t[i]);
        d=d+l*1.0;
    }
    d=d/j;
    printf("%g",d);
     //printf("%s",t[1]);

    return 0;
}
