#include<stdio.h>
int main()
{
   int n;
    scanf("%d",&n);
    int pf,nf,pn,nn,mode,mf;
    scanf("%d",&pn);
    pn=1;
    nf=1;
    mode=pn;
    pf=0;
    mf=1;
    int i;
    for(i=0;i<=(n-2);i++)
    {
        scanf("%d",&nn);
        if(nn==pn)
        {
            nf++;
            if(nf>pf)
            {
                mode=nn;
                mf=nf;
            }
            pn=nn;

        }
        else{
              pf=nf;
              nf=1;
              pn=nn;

        }
    }
    printf("\n%d, %d",mode,mf);
    return 0;

}
