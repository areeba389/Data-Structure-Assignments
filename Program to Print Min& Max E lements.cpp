#include<stdio.h> 
struct Node *head=NULL; 
struct Node 
{ 
    int value; 
    struct Node *next; 
}; 
struct Node * createNode(int item) 
{ 
    struct Node *n=malloc(sizeof(struct Node)); 
    n->value=item; 
    n->next=NULL; 
    return n; 
} 
void addNode(int item) 
{ 
    struct Node *n,*z; 
    n=createNode(item); 
    if(head==NULL) 
    { 
        head=n; 
    } 
    else 
    { 
        z=head; 
        while(z->next!=NULL) 
        { 
            z=z->next; 
        } 
        z->next=n; 
    } 
} 
int maximum() 
{ 
    int maximum=head->value; 
    struct Node *z=head; 
    while(z!=NULL) 
    { 
        if(maximum<z->value) 
        { 
            maximum=z->value; 
        } 
        z=z->next; 
    } 
    return maximum; 
} 
 
int minimum() 
{ 
    int minimum=head->value; 
    struct Node *z=head; 
    while(z!=NULL) 
    { 
        if(minimum>z->value) 
        { 
            minimum=z->value; 
        } 
        z=z->next; 
    } 
    return minimum; 
} 
void main() 
{ 
    int limit,val,i=0; 
    printf("Enter limit of linked List : "); 
    scanf("%d",&limit); 
    printf("\nEnter value : "); 
    scanf("%d",&val); 
    addNode(val); 
    while(i<limit-1) 
    { 
			printf("\nEnter value : "); 
			scanf("%d",&val); 
			addNode(val); 
			i++; 
    } 
 
    printf("\nLargest element of the list is : %d",maximum()); 
    printf("\n\nSmallest element of the list is : %d\n",minimum()); 
} 
