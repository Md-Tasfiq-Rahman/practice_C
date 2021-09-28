#include<stdio.h>
int function(int x,int y)
{
    if(x<y)
        return function(y,x);
    else if(y!=0)
        return(x+function(x,y-1));
    else
        return 0;

}
int mauin()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",function(x,y));
    return 0;
}
