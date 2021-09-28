#include<stdio.h>
#include<string.h>
void permute(char c[][100],int l,int r)
{
    char *ex;
    int m=0;
    int i,j,k;
    if(l==r)
    {

    for(i=0;i<=10;i++)
    {
        printf("%d.  ",m);
        printf("%s",c+i);
        m++;
    }
    }
    {
       for(j=l;j<=r;j++)
       {
           strcpy(ex,*(c+l));
           strcpy(*(c+l),*(c+j));
           strcpy(*(c+j),ex);
           permute(c,l+1,r);
           strcpy(ex,*(c+l));
           strcpy(*(c+l),*(c+j));
           strcpy(*(c+j),ex);
       }
    }
}
int main()
{
    char c[11][100]={"#intigra","#intigraorg","#intigrascienceorg","#welfare","#education","#spread","#scienceforeverycorner","#science","#technology","#organization","#development"};
    int i;

    char *p;
    p=c;
    permute(p,0,10);
    return 0;
}


