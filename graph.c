#include<stdio.h>
int main()
{
   int k;
   printf("Enter 1 to start\n");
      scanf("%d",&k);



   // printf("Enter 's'\n");
     //scanf("%c",&c);
    while(k)
    {



    int x1,y1;
    printf(" enter x1,y1\n");
    scanf("%d , %d",&x1,&y1);
    int x2,y2;
    printf(" enter x2,y2\n");
    scanf("%d ,%d",&x2,&y2);
   if(x2-x1<0)
   {
       printf("%dx+%dy=%d\n",y2-y1,x1-x2,x2*(y2-y1)-y2*(x2-x1));
   }
   else{
    printf("%dx-%dy=%d\n",y2-y1,x2-x1,x2*(y2-y1)-y2*(x2-x1));
   }
   // printf("Enter a key\n");
    // scanf("%c",&c);
      //printf("Enter a key\n");
      printf("Enter 1 to continue or 0 to quiet\n");
     scanf("%d",&k);
}
return 0;
}
