#include <stdio.h>
void displayBits(int x);
int main()
{
    unsigned int n;

    printf("enter integer value ");
    scanf("%d",&n);

    displayBits(n);
    if(n>1)
    {
    if((n=n&(n-1))==0) 
    printf(" is a power of 2 \n");
    else
    printf("is not a power of 2 \n");
    }
    return 0;

}

void displayBits(int x)
{
    int mask, i;
    for (i = 31 ; i>=0 ; i--)
    {
        mask = 1 << i;
        putchar((x&mask)?'1':'0');

        if(i%8==0)
            putchar(' ');

    }
    printf("\n");

}