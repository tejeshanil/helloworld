#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};

int insert_node(struct node *str,int loc,int insert);

void main()
{
int i=0,loc = 2,insert =100;

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
        start=tmp;
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


struct node *a;

insert_node(start,loc,insert);

struct node *q;

q=start;

while (q->next!=NULL)
{
    printf(" start info %d\n",q->info);
    q=q->next;
}

}

int insert_node(struct node *str, int loc, int insert)
{
    struct node *post;
    post=start;

    while (post!=NULL)
    {
        if (post->info==loc)
        {
            
        }

    }

    while(str!=NULL)
    {
        if (str->info==loc)
        {
            str->info=
        }
        str=str->next;
    }
}

