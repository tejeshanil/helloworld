#include <stdio.h>

void displayBits(int x);
int main()
{
    int x;
    printf("enter an integer");
    scanf("%d",&x);
    displayBits(x);
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