#include<stdio.h>
unsigned long long int lcm(unsigned long long int x,unsigned long long int y)
{
    unsigned long long int i;
    for(i=y;i<=x*y;i++)
    {
        if ((i%x==0)&&(i%y==0))
        {
            return i;
        }
    }
}
int main()
{

    unsigned long long int x,y,c,i;
    scanf("%llu %llu",&x,&y);
    printf("%llu , %llu",x,y);
    c=lcm(x,y);
    printf("%llu",c);
}
