#include<stdio.h>
int func (int x, int y)
{
    if(x<y)
        return func(y,x);
    else if(y!=0)
        return(x+func(x,y-1));
    else
        return 0;

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",func(x,y));
    return 0;
}



