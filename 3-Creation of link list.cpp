#include <stdio.h>

 
struct node 
{
  
int data;
   
struct node *next;
 
};

struct node*head=NULL,*tail=NULL;

 int main () 
{
  
int ch;

while (1);

{
  
     printf("1 for creat \n ,2 for delete ,3 for insert \n,4 for view,5 for exist");
  
     printf ("your choice");
    
     scanf ("%d", ch);
  
 
 
          if(ch==1)creat();
                   if(ch==4)view();
                   if(ch==5)break();
}
 }

   void creat()
   
   {
       int n,i,struct node *temp;
       printf("enter no.of nodes to creat");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           
           temp=(struct node*)malloc(sizeof (struct node));
           printf("enter data");
           if("%d",temp->data);
           
           temp->=NULL;
           if (head==NULL)
           {
               head=temp;
               tail=temp;
               
           }
           
           
           
           else
               {
                   
                   
                   tail->next=temp;
                   tail=temp
               }
               i=i+1;
               
               void view()
               {
                   
                   struct node *trap;
                   trap=head;
                   while(trap!=NULL)
                   {printf("%d \n",trap->data);
                   trap=trap->next;
                   }
               }
                   
              
               
               
           }
       }


 

