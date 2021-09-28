#include<stdio.h>
int main(){
    char str1[100],str2[100];char ch,c;

    scanf("%c",&ch);
    ///The newline after you enter the character for ch is considered for the gets(str1)
    ///str1 will be empty string
    scanf("%c",&c);
    //gets(str1);


    printf("%s\n",str1);


    printf("END");


    return 0;
}
