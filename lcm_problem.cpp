#include<stdio.h>
unsigned long long int lcm(unsigned long long int r,unsigned long long int s)
{
    unsigned long long int a,i;
    for(i=s;i<=(r*s);i++)
    {
        if((i%r)==0&&(i%s)==0)
        {
            a=i;
            break;
        }
    }

    return a;

}
int main()
{
    int i,j,r,s,t,q=0;
    scanf("%d",&t);
    //printf("%d",t);


    unsigned long long int x,y;
    int arr[t][2];


    if(t>=1&&t<=10000)
    {
        unsigned long long int a[t][2];

        for(i=1;i<=t;i++)
        {
            q=0;
           scanf("%lld %lld",&x,&y);
           if(x>=1&&x<=1000000000&&y>=1&&y<=1000000000)
           {
               unsigned long long int a,b,c;
              a=x;
              b=y;
               for(r=a;r<b;r++)
               {
                   for(s=r+1;s<=b;s++)
                   {
                      c=lcm(r,s);
                      if(c>=x&&c<=y)
                      {
                          q=1;
                          j=i-1;
                          arr[j][0]=r;
                           arr[j][0]=r;
                          continue;
                      }
                   }
               }

               if(q==0)
               {
                   j=i-1;
                   arr[j][0]=-1;
                   arr[j][1]=-1;
               }
           }

        }
        for(i=0;i<t;i++)
    {
        printf("%lld %lld\n",a[i][0],a[i][1]);
    }
    }

    return 0;
}
