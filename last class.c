#include<stdio.h>
int rec(int i)
{
    int s=0;
    if(i!=0)
    {

        int r;
        r=i%10;
        i=i/10;
        //printf("%d\n",r);
        s=s+r;
        rec(i);
        //printf("%d\n",r);


    }
    return s;
}
int rec1(int i)
{
    if(i!=0)
    {


    return i%10+rec1(i/10);
    }
}
int rec2(int n)
{
    if(n>0)
    {
        return n*n+rec2(n-1);
    }
}
int g(int m,int n)
{
    int r,k;
    r=m%n;
    if(r==0)
    {
        return n;
    }
    else
    {
       g(n,r);
    }
    }
    int f(int n)
    {
        if(n==1)
        {
            return 1;
        }
        else
        {
            return n*f(n-1);
             }
    }

int main()
{
int s;

s=rec1(123);

printf("%d\n",s);
s=rec2(5);
printf("%d\n",s);
s=g(24,36);
printf("%d\n",s);
s=f(6);
printf("%d\n",s);
//s=fi(6);
//printf("%d\n",s);
int a=0;
int *b,**c;
b=&a;
c=&b;
**c=5;
int ***d;
d=&c;
***d=6;
printf("%d",a);



return;

}
