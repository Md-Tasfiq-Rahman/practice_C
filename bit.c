#include<stdio.h>
int main()
{
    int a=-21,b=2147483647;
   // a=a|b;
    //a=a>>1;
    a=a>>1;
    int i=1;
    int s=0;
    int n;
    for(n=0;n<=30;n++)
    {
        //i=i<<n
        int p=i<<n;
        s=s+(i<<n);
        printf("%d,%d\n",s,p);
    }

    printf("%d\n",s);
    printf("%d",b<<1);
        return 0;
}
