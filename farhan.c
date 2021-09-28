#include<stdio.h>
#include<conio.h>
int main()
{
    int n,l,j,m;
    scanf("%d",&n);
    char g[2];
    gets(g);

    int k[n];
    int i;
    for(i=0;i<n;i++)
    {

        m=0;
        char c[100];
        gets(c);
        l=strlen(c);
        for(j=0;j<l;)
        {
            if(c[j]>='0'&&c[j]<='9')
            {
                m=m;
            }
            else if(c[j]==0)
            {
                break;
            }
            else
                {
                    m=m+1;
                    printf("%c %d,%d\n",c[j],m,j);
                   // m=m+1;
                }
                j++;


        }

       k[i]=m;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",k[i]);
    }

    return 0;
}
