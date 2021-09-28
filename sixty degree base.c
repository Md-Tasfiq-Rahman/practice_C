#include<stdio.h>
#include<math.h>
double pi=3.1416;
int main()
{
    double a,b,c,A,B,C;
    int i;
    a=20.0;
    B=10*1.0;
    double arr[360];
    for(i=0;i<=169;i++)
    {
      C=i*1.0;
      A=180.0-B-C;
      b=(a/sin(A*pi/180.0))*sin(B*pi/180.0);
      c=(a/sin(A*pi/180.0))*sin(C*pi/180.0);
      //fun(a,b,c,i);
      arr[i]=c/a;
    }
    //printf("%f",sin(pi));
    for(i=0;i<=169;i++)
    {
        printf("%lf ",arr[i]);
    }
    return 0;

}
void fun(double a,double b,double c,int i)
{
    printf("\ninformation for %d degree angle\n",i);
   /* printf("\t\t cos =%lf\n",a/b);
    printf("\t\t cot =%lf\n",a/c);
    printf("\t\t sec =%lf\n",b/a);
    printf("\t\t cosec =%lf\n",b/c);
    printf("\t\t tan =%lf\n",c/a); */
    printf("\t\t sin =%lf\n",c/b);

    return;
}
