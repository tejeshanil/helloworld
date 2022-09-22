#include <stdio.h>
int main()

{    
    int *ptr;
    int arr={1,2,3,4,5};

    ptr=arr;

    printf("ptr value: %d\n",ptr);
    printf("ptr value: %d\n",ptr+1);
    printf("ptr value: %d\n",ptr+400);
    return 0;

}