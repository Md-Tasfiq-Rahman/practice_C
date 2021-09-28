#include<stdio.h>
#include<string.h>

/*void sum(int a, int b)
{
    printf("%d",a+b);
}
void s1()
{
    printf("%d",a+b);
}
int a=6,b=2;
*/
int main()
{
   /* char s[]="1010110";
    puts(s);
    int i,l,j;
    for(i=0;*(s+i);i++);
    printf("%d",i);
    l=i;
    double sum=0;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        double x,y;
        x=((int)s[i]-48)*1.0;

        y=j*1.0;
        y=pow(2.0,y);
         printf("%lf , %lf \n",x,y);
        sum=sum+x*y;

    }
    printf("%lf",sum);
    */
   /* int a=3,b=1;
    s1();
    sum(a,b);
    */
    int *p,i;
    int b[]={0,4,11,14,19};
    p=b;
    for(i=0;i<5;i++)
    {
        (*p)++;
        printf("%d  ",++*p);
    }

}
