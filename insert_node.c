#include <stdio.h>
#include <stdlib.h>
void main()
{
int i=0;
struct node{
    int info;
    struct node *next;
};

struct node *start=NULL;

struct node *p;

p=start;

for( i=0; i<=5; i++)
{
    struct node *tmp;
    
    tmp=(struct node *) malloc(sizeof(struct node));

    if(p==NULL)
    {
        tmp->info=i;
        tmp->next=tmp;
        p=tmp;
    }
    else
    {
        tmp->info=i;
        tmp->next=NULL;
        p->next=tmp;
    }
    p=p->next;
    printf("info is %d\n",p->info);
}
}