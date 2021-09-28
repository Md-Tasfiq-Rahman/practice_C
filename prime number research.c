#include<stdio.h>
int pt(int n)
{
    int i,j=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            j=1;
        }
    }
    if(j==0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a,x=2;
    int n=0;
    int i;
    for(i=2;i<=100000;i++)
    {
        if(pt(i)==1)
        {
            printf("%d,",i-x);
            x=i;
            n++;
        }
    }
    printf("\n%d",n);
    return 0;
}
