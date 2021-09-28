#include<stdio.h>
int main()
{
    int T,r,c,k,i,x,y,p,count,q,rem;
    char v;
    scanf("%d",&T);
    if(T>=1&&T<=20000)
    {
         for(i=1;i<=T;i++)
         {
             scanf("%d %d %d",&r,&c,&k);
             if(r>=1&&c<=100&&k>=1&&k<=62)
             {
                 //char a[r][c];
                  char m[k],a[r][c],out[r][c];  //m[k] contain chiken name
                 for(x=0;x<r;x++)
                 {
                     scanf("%c",&v);
                     for(y=0;y<c;y++)
                     {

                         scanf("%c",&a[x][y]);

                     }

                 }
                 if(k<=26)
                 {
                     //char m[k];
                     int num=97;
                     for(p=0;p<k;p++)
                     {
                         m[p]=num;
                         num++;
                     }
                 }
                 else if(k>26&&k<=52)
                 {
                     //char m[k];
                     int num=97;
                     for(p=0;p<=25;p++)
                     {
                         m[p]=num;
                         num++;
                     }
                     //m[26]=65;
                     num=65;
                     for(;p<k;p++)
                     {
                         m[p]=num;
                         num++;

                     }

                 }
                 else if(k>52&&k<=62)
                 {
                     //char m[k];
                     int num=97;
                     for(p=0;p<=25;p++)
                     {
                         m[p]=num;
                         num++;
                     }
                     //m[26]=65;
                     num=65;
                     for(;p<52;p++)
                     {
                         m[p]=num;
                         num++;

                     }
                     num=48;
                     for(;p<k;p++)
                     {
                         m[p]=num;
                         num++;
                     }

                 }
                 count=0; //mot koita r ase
                 for(x=0;x<r;x++)
                 {
                     for(y=0;y<c;y++)
                     {
                         if(a[x][y]=='R'||a[x][y]=='r')
                         {
                             count++;
                         }
                     }
                 }

                 q=count/k;
                 rem=count%k;
                 int avg[k]; // protten chicken joto ta r pabe
                 for(x=0;x<k;x++)
                 {
                     avg[x]=q;
                 }
                 for(x=0;x<rem;x++)
                 {
                     avg[x]++;
                 }

                 int f1=0,f2=0;
                 for(x=0;x<r;x++)
                 {
                     if(x%2==0)
                     {
                         for(y=0;y<c;y++)
                         {
                            if(a[x][y]=='r'||a[x][y]=='R')
                            {
                                f1++;
                            }
                            if(f1<avg[f2])
                         {
                             out[x][y]=m[f2];
                            // printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             continue;
                         }
                         if(f1==avg[f2])
                         {
                             out[x][y]=m[f2];
                             //printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             f1=0;
                             if(f2==(k-1)) f2=f2;
                             else f2++;
                             continue;
                         }
                         if(f2==(k-1))
                         {
                             out[x][y]=m[f2];
                            // printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             continue;
                         }
                         }

                     }
                     else if(x%2!=0)
                     {
                         for(y=(c-1);y>=0;y--)
                         {
                            if(a[x][y]=='r'||a[x][y]=='R')
                            {
                                f1++;
                            }
                            if(f1<avg[f2])
                         {
                             out[x][y]=m[f2];
                            // printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             continue;
                         }
                         if(f1==avg[f2])
                         {
                             out[x][y]=m[f2];
                            // printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             f1=0;
                             if(f2==(k-1)) f2=f2;
                             else f2++;
                             continue;

                         }
                         if(f2==(k-1))
                         {
                             out[x][y]=m[f2];
                             //printf("chicken name %c ,rice for chicken %d, recquired rice for chicken %d \n",m[f2],f1,avg[f2]);
                             continue;
                         }
                         }
                     }
                 }
                 for(x=0;x<r;x++)
                 {
                     for(y=0;y<c;y++)
                     {
                         printf("%c",out[x][y]);
                     }
                     printf("\n");
                 }

                     }
                 }

             }
             return 0;
         }


