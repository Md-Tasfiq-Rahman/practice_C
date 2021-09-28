#include<stdio.h>
#include<stdlib.h>
int main()
{
   // int a[3][2][2];
   int ***a;
   a=(int ***)malloc(sizeof(int**)*3);
    int i,j,k;
    for(i=0;i<3;i++)
    {
        *(a+i)=(int**)malloc(sizeof(int*)*2);
       // a[i]=(int**)malloc(sizeof(int*)*2);
        for(j=0;j<2;j++)
        {
            *(*(a+i)+j)=(int *)malloc(sizeof(int)*2);
            //a[i][j]=(int *)malloc(sizeof(int)*2);
        }
    }
    if(a==NULL)
    {


        printf("sorry");
    }
    else
    {


    //for(i=0;i<2;i++)
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d",a[i][j][k]);
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            free(*(*(a+i)+j));
        }
        free(*(a+i));
    }
    free(a);
    }
    return 0;


}
