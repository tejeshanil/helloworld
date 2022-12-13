#include <stdio.h>
int main()

{

    int a =105,sum=0,i=0;
    int mask;
    printf("before reverse\n");

for (i=31;i>=0;i--)
    {
        mask=(1<<i);
        putchar((a&mask)?'1':'0');

    }

  /*  for (j=31;j>=0;j--)
    {
        mask=1<<j;
        if(a&mask){


            sum = sum + (1<<j);

        }
        //a>>=1;

    }
*/
int j=31;
while(a)
{
    mask=1;
    
    if(a&mask)
    {
        sum = sum + (1<<j);
    }
    a>>=1;
    j--;

}





printf("\nafter reverse\n");
    for (i=31;i>=0;i--)
    {
        mask=(1<<i);
        putchar((sum&mask)?'1':'0');

    }
    
printf("\nsum is %d\n",sum);

}