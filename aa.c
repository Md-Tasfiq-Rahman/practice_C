

// C program to demonstrate use of ftel()
#include<stdio.h>

int main()
{
    /* Opening file in read mode */
    FILE *fp = fopen("test.txt","w");
    //char *k="Someone over there is calling you. We are going for work. Take care of yourself.";
    fprintf(fp,"Someone over there is calling you. We are going for work. Take care of yourself.");
    fclose(fp);
      fp = fopen("test.txt","r");

    /* Reading first string */
    char string[20];
    fscanf(fp,"%s",string);

    /* Printing position of file pointer */
    printf("%ld", ftell(fp));
    return 0;
}
