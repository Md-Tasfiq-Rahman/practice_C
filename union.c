/*#include<stdio.h>
int encode(i);
int main()
{
    int i;
    i=encode(11);
    printf("%d\n",i);
    i=encode(i);
    printf("%d",i);
    return 0;
}
 int encode(int i)
 {
     union c{
     int n;
     char s[2];
     }x;
     unsigned char ch;
     x.n=i;
     printf("%d\n",x.n);
     ch=x.s[0];
     x.s[0]=x.s[1];
     printf("%d\n",x.n);
     x.s[1]=ch;
      return x.n;

 }*/

   /*    #include<stdio.h>

       union Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

       void main()
       {

              union Employee E;

                    printf("\nEnter Employee Id : ");
                    scanf("%d",&E.Id);

                    printf("\nEnter Employee Name : ");
                    scanf("%s",&E.Name);

                    printf("\nEnter Employee Age : ");
                    scanf("%d",&E.Age);

                    printf("\nEnter Employee Salary : ");
                    scanf("%ld",&E.Salary);

                    printf("\n\nEmployee Id : %d",E.Id);
                    printf("\nEmployee Name : %s",E.Name);
                    printf("\nEmployee Age : %d",E.Age);
                    printf("\nEmployee Salary : %ld",E.Salary);


       }
       */
       #include<stdio.h>
       enum com{keyboard,CPU,screen,printer};
       int main()
       {
           enum com a;
           a=printer;
           printf("%d",a);
           return 0;
       }

