// nice logic I've underdtood how it works... can revise any time !!

#include<stdio.h>
int main()
{
    int bin=1,p,q=0,r,x;
    // clrscr();
    printf("Rows you want to input:");
    scanf("%d",&r);
    printf("\nPascal's Triangle:\n");
    while(q<r)
    {   
        printf("ROW %d",q);
        for(p=40-3*q;p>0;--p)
        printf(" ");
        for(x=0;x<=q;++x)
        {
            if((x==0)||(q==0))
            bin=1;
            else
            bin=(bin*(q-x+1))/x;
            printf("%6d",bin);
        }
        printf("\n");
        ++q;
    }
    // getchar();
     return 0;
}
