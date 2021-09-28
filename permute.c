#include<stdio.h>
#define s(a,b) {char t; t=a;a=b;b=t;}
char str[100];
int n=0;

void p(char &a, char &b)
{
    char *t;
    t=*a;
    *a=b;
    *b=t;

}

void perm(int i)
{
    if (str[i])
    {
        int k;
        for(k=i;str[k];k++)
        {
           p(str[k],str[i]);
            perm(i+1);
           p(str[k],str[i]);
        }
    }
    else{
            n=n+1;
        printf("%d. %s\n",n, str);
    }
}

int main()
{
    scanf("%s",str);
    perm(0);
    return 0;
}

