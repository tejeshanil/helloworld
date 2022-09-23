#include <stdio.h>
void displayBits(int x);
int main()
{
    unsigned int n;

    printf("enter integer value ");
    scanf("%d",&n);

    displayBits(n);

    n = n&(n-1);

    displayBits(n);
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