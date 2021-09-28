#include<stdio.h>
int main(){
    float a=5.4538759;
    float b=6;
    float c=3.5e-8;
    printf("a=%f, b=%f, c=%f\n",a,b,c);
    printf("a=%e, b=%e, c=%e\n",a,b,c);
    printf("a=%E, b=%E, c=%E\n",a,b,c);
    printf("a=%10.2f, b=%10.2f, c=%10.2f\n",a,b,c);
    printf("a=%.2f, b=%.2f, c=%.2f\n",a,b,c);
    printf("a=%-010.2f, b=%-10.2f, c=%5.2f\n",a,b,c);
    return 0;
}
