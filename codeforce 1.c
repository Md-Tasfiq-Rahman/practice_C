#include<stdio.h>
char str[100];

void p(char a,char b)
{
    char t;
    t=a;
    a=b;
    b=t;

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
        printf("%s\n",str);
    }
}

int main()
{
    scanf("%s",str);
    perm(0);
    return 0;
}

