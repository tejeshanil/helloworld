#include <stdio.h>
int main()
{
int i=0,sum=0,a=13,j=0;
int mask;

for (j=31;j>=0;j--)
{

    mask=1<<j;
    putchar((a&mask)?'1':'0');
    
}
printf("\n");

while(a)
{
    mask=1;
    if(!(a&mask))
    {
        sum=sum+(1<<i);
    }
    i++;
    a>>=1;
}
printf("%d\n",sum);


for (i=31;i>=0;i--)
{

    mask=1<<i;
    putchar((sum&mask)?'1':'0');
    
}

printf("\n");

}