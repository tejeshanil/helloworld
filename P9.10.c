#include <stdio.h>
int main()

{    
    int i, *ptr;
    int arr[]={1,2,3,4,5};

    ptr=arr;

    for (i=0;i<5;i++) {

        printf("Address of arr[%d] = %p %p %p %p \n",i,&arr[i], arr+i ,ptr+i, &ptr[i] );
        printf("value of arr[%d] = %d %d %d %d \n",i,arr[i],*(arr+i),*(ptr+i), ptr[i] );
    }

    return 0;

}