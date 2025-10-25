#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
void main()
{
  struct node*start=(struct node*)0;//null value
  struct node*push(struct node*,int);
  struct node*pop(struct node*);
  void disply(struct node*);
  int search(struct node*,int),opt,item,ans;
  while(1)
   { printf("\n1.push\n2.pop\n3.display\n4.search\n5.exit\n");
printf("your option: ");
 scanf("%d",&opt);
 switch(opt)
 {
   case 1:printf("item to push");
          scanf("%d",&item);
          start=push(start,item);
          break;
   case 2:start=pop(start);
          break;
   case 3:disply(start);
   break;
   case 4:printf("item to search: ");
          scanf("%d",&item);
          ans=search(start,item);
          if(ans==1)
          printf("found...");
          else
          printf("not found");
          break;
   case 5:exit(0); 
   }
   }
   }//end of main
   //function to insert a node in a linked list
   struct node*push(struct node*list,int data)      
   {
   struct node*t;
   t=( struct node*)malloc(sizeof(struct node));//creat a node
   t->data=data;//fill data
   t->next=list;//attach at begining
   list=t;
   return list;
    }
    //function to delete a node
    struct node* pop(struct node*list)
    {
     struct node*t=list;
     if(list!=(struct node*)0)
     {
       printf("poped item:%d",list->data);
       list=list->next;
       free(t);
     }
     else
     printf("list is null");
     return list;
    }
    //function to display list contents
    void disply(struct node*list)
    {
     while(list!=(struct node*)0)
     {
     printf("%d,",list->data);
     list=list->next;
    }
    return;
    }
    //function to search an item
    int search(struct node*list,int item)
    {
     while(list!=(struct node*)0 && item!=list->data)
     list=list->next;
     if(list==(struct node*)0)
     return 0;
     else
     return 1;
    }
