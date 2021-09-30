#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct  node*next;
}*head=NULL,*tail;

void create(int n)
{
	     
		 for (int i=0;i<n;i++)
{
	  struct node *temp=(struct node *)malloc(sizeof (struct node));
	  printf("enter data :  ");
	  scanf("%d" ,&temp->data);
	  if(head==NULL)
	  {
	  	head=temp;
	  	temp->next=NULL;
	  	tail=temp;
	  	
	  }
	 else
	 {
	 	
	 		tail->next=temp;
	 		temp->next=NULL;
	 		tail=temp;
	 	 }
	
}
}
 
 
 void display(struct node *p)
 {
 	
 	while(p!=NULL)
	 {
	 	
	 	printf("%d \t" ,p->data);
	 	p=p->next;
	
	 }
	 printf("\n");
 }
 
void print_even(struct node *p)

{
	
	printf("print even numbers in link list \n");
	while(p!=NULL)
	{
		
	 if (p->data%2==0)
	 {
	 	printf("%d\t",p->data);
	 }
	 p=p->next;
	}
	
	printf("\n");
}
	
	int main()
	{
		create(5);
		display(head);
		print_even(head);
	}
	
	
	
	
	

