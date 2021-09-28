#include<stdio.h>
#include<math.h>


int main(){

   double x;
   scanf("%lf",&x);
   x=(x*3.1416)/180.0;
   int i;
   i=0;
   double cos=0.0;
   double add=1;
   while(add>=0.000001||add<=-0.000001)
   {
       add=0;
       double m,n;
       m=2*(double)i;
       n=pow(x,m);
       int k=1;
       float j=1.0;
       for(k=1;k<=(int)m;k++)
       {
           j=j*k;
       }
       if(i%2==0)
       {
       add=n/j;
       }
       else
       {
           add=(-1.0)*(n/j);
       }
       cos=cos+add;
       i++;
      //  printf("%lf\n",add);
   }
   printf("%0.3lf",cos);
}
