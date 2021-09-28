#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    int a=5,b=6;
    p=fopen("num.txt","w");
    fprintf(p,"%d %d",a,b);//note
    fclose(p);
    p=fopen("num.txt","r");
    char s[80];
    fgets(s,80,p);
    int x,y;
    sscanf(s,"%d %d",&x,&y);
    printf("%d\n",x);
    sscanf(s,"%d",&x);
    printf("%d",y);
    fclose(p);
}
