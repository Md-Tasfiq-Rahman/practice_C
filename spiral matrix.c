#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int m[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int p[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            p[i][j]=0;

        }
    }
    int px[n*n];
    int py[n*n];
    int q[n*n];//m initial matyrix p flag matrix q output
    int  k=0;
    int f=0;
    int x=0,y=0;
    while(f==0)
    {
        if((x==0)&&(y==0)&&p[x][y]==0)
        {
            q[k]=m[x][y];
            p[x][y]=1;
             //printf("%d bhoot  \n\n",p[0][0]);
            px[k]=x;
            py[k]=y;
            //printf("%d bhoot  \n\n",p[0][0]);
            //printf("%d bhoot  \n\n",p[x][y]);
            y++;
            k++;

            continue;
        }
        if(px[k-1]==x&&py[k-1]<y)
        {

                if(p[x][y]==0&&y<n)
                {
                    q[k]=m[x][y];
                    p[x][y]=1;
                    px[k]=x;
                    py[k]=y;
                    y++;
                    k++;
                    continue;

                }
                else if((p[x+1][y-1]==0)&&(x<n&&x>=0))
                {
                    x++;
                    y=py[k-1];
                    q[k]=m[x][y];
                    p[x][y]=1;
                    px[k]=x;
                    py[k]=y;
                    x++;
                    k++;
                    continue;
                }
                else
                {
                    f=1;
                    continue;
                }



        }
        if(px[k-1]<x&&py[k-1]==y)
        {
            if((p[x][y]==0)&&x<n)
            {
                q[k]=m[x][y];
                p[x][y]=1;
                px[k]=x;
                py[k]=y;
                x++;
                k++;
                continue;

            }
            else if((p[x-1][y-1]==0)&&y>=0)
            {
                x=px[k-1];
                y--;
                q[k]=m[x][y];
                px[k]=x;
                py[k]=y;
                p[x][y]=1;
                k++;
                y--;
                continue;





            }
            else
            {
                f=1;
                continue;
            }
        }
        if(px[k-1]==x&&py[k-1]>y)
        {
           if(p[x][y]==0&&y>=0)
           {

            q[k]=m[x][y];
            px[k]=x;
            py[k]=y;
            p[x][y]=1;
            y--;
            k++;
            continue;
           }
           else if((p[x-1][y+1]==0)&&x>=0)
           {
               x--;
               y=py[k-1];
               q[k]=m[x][y];
               p[x][y]=1;
               px[k]=x;
               py[k]=y;
               k++;
               x--;
               continue;
           }
           else
           {
               f=1;
               continue;
           }




        }
        if(px[k-1]>x&&py[k-1]==y)
        {
            if((p[x][y]==0)&&(x>=1))
            {
                q[k]=m[x][y];
                p[x][y]=1;
                px[k]=x;
                py[k]=y;
                x--;
                k++;
                continue;

            }
            else if(p[x+1][y+1]==0&&y>=0&&y<n)
            {
                //x=px[k-1];
                x++;
                y++;
                q[k]=m[x][y];
                p[x][y]=1;
                px[k]=x;
                py[k]=y;
                y++;
                k++;
                continue;
            }
            else
            {
                f=1;
                continue;
            }
        }




    }
    //printf("k=%d",k);
    for(i=0;i<n*n;i++)
    {
        printf("%d\n",q[i]);
    }
    return 0;

}
