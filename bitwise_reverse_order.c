#include <stdio.h>
int main()
{
  int i=0,j=0;
    int A=13;
    int mask=1,sum=0;
   
      for(i=31;i>=0;i--)
    {
    mask=1<<i;
    putchar((A&mask)?'1':'0');
    }

    printf("\n");

    for (j=31;j>=0;j--)
    {
        if(A&mask)
        {
            sum=sum+(1<<j);
        }
        A>>=1;
    }

    for(i=31;i>=0;i--)
    {
    mask=1<<i;
    putchar((sum&mask)?'1':'0');
    
    }
printf("\n");

     printf("sum value after %d\n",sum);

}
