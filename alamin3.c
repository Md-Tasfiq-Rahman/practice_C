#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int mat[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0,d;
    j=0;
    int m;
    for(m=n-1;m>=0;m--)
    {
        d=0;
        for(i=0;j<n-1;i++)
        {
            j=i+m;
            d=d+mat[i][j];
            //printf("mat[i][j]=%d i=%d j=%d\n",mat[i][j],i,j);

        }
        printf("%d\n",d);
        j=0;
        sum=sum+d;
    }
    for(m=0;m<=n-1;m++)
    {
        d=0;
        for(j=0;i<n-1;j++)
        {
            i=j+m;
            d=d+mat[i][j];
          // printf("mat[i][j]=%d i=%d j=%d\n",mat[i][j],i,j);


        }
        printf("%d\n",d);
        sum=sum+d;
        i=0;
    }
    printf("%d",sum);
    return 0;
}
