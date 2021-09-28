#include<stdio.h>
int com(int i,int n);
int main()
{
   int n;
   scanf("%d",&n);
   int i,j;
   for(i=0;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
           int s;
           s=com(j,i);
           printf("%d ",s);
       }
       printf("\n");
   }
   return 0;
}
int com(int i,int n)
{
    int j,k=1,l=1;
    if(i==0)
    {
        return 1;
    }
    else{
        for(j=n;j>=(n-i+1);j--)
        {
            k=k*j/l;
            l++;
        }
        return k;
    }
}
