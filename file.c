#include<stdio.h>
int main()
{
    FILE *p;
    FILE *q;
    p=fopen("i.txt","w");
    int i,j,k;
    fprintf(p,"#include<stdio.h> /*write a program*/hello world");
    fclose(p);
    p=fopen("i.txt","r");
    i=0;
     q=fopen("o.txt","w");
    for(;j!=EOF;i++)
    {
       j=fgetc(p);
       if(j=='/'&&fgetc(p)=='*')
       {
           while(j!='*'&&fgetc(p)!='/')
           {
                   j=fgetc(p);
           }
           j=fgetc(p);
           continue;
       }
       //printf("%c",j);
       fputc(j,q);
       // printf("\n%d",i);

    }
    //printf("\n%d",i);
    fclose(p);
    fclose(q);
    return 0;
}
