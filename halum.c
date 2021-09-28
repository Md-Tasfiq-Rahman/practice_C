#include<stdio.h>
int main()
{
    int i,j,c;
    i=1;
    j=0;
    c=0;
    while(i<=100)
    {
        if(i%2!=0)
        {
            if(j==0)
            {
                printf("%d\n",i);
                j=1;
            }
           c++;

        }
        i++;

    }
    printf("%d",c);
    return 0;
}
