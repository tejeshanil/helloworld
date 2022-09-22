#include <stdio.h>
int func(int *p);

int main()

{    

    int arr[5]={1,2,3,4,5};

    

    func(arr);

    return 0;

}

int func (int *q) {

    printf("arr address is : %d\n",*(q+1));


}