#include<stdio.h>
int main()
{
    char c[11][100]={"#development","#intigraorg","#intigrascienceorg","#welfare","#education","#spread","#scienceforeverycorner","#science","#technology","#organization","#intigra"};
    int i,j,l=458;

    char *p;
    strcpy(p,*(c+9));
    strcpy(*(c+9),*(c+10));
     strcpy(*(c+10),p);
    for(i=0;i<=9;i++)
    {
       for(j=i+1;j<=10;j++)
       {

    strcpy(p,*(c+i));
    strcpy(*(c+i),*(c+j));
     strcpy(*(c+j),p);
     int k;

     printf("%d",l);
     for(k=0;k<=10;k++)
     {
         printf("%s ",c+k);
     }
     printf("\n");
     l++;
       }

    }

    return 0;
}

