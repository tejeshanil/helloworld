// C program to extract k bits from a given
// position.
#include <stdio.h>

// Function to extract k bits from p position
// and returns the extracted value as integer
int bitExtracted(int number, int k, int p)
{
	return (((1 << k) - 1) & (number >> (p - 1)));
}

// Driver code
int main()
{
	int number = 19575, k = 11, p = 4;
    int mask,i=0;
    int ext=0;

        for(i=31;i>=0;i--)
        {
            mask=1<<i;
            putchar(number&mask?'1':'0');
        }

    printf("\n");
	ext=bitExtracted(number, k, p);

    printf("The extracted number is %d",ext);
    
        printf("\n");

            for(i=31;i>=0;i--)
        {
            mask=1<<i;
            putchar(ext&mask?'1':'0');
        }


	return 0;
}


