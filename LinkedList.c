#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum{FAILURE,SUCCESS};

struct node
{
  char data[4];
  struct node *link;
};

int main()
{
 printf("// ================== Assignment 1 ===================== //\n");

 struct node *head,*t, *k, *f, *j, *m;
 head = (struct node *)malloc(sizeof(struct node)); 
 if(head == NULL)
 { 
   printf("Error in Malloc");
   return FAILURE;
 }
 
 t = (struct node *)malloc(sizeof(struct node));
 if(t == NULL)
 {
   printf("Error in Malloc");
   return FAILURE;
 }
 strcpy(head->data,"Old");
 t->link = head;
 head    = t;
 strcpy(head->data,"New");
 printf("Print New Node:: %s\n, Print Old Node:: %s\n ",head->data, head->link->data);
  
 printf("// ================== Assignment 2 ===================== //\n");

 k = (struct node *)malloc(sizeof(struct node));
 if(k == NULL)
 {
   printf("Error in Malloc");
   return FAILURE;
 }
 
 k->link = head->link;
 head->link = k;
 strcpy(head->link->data,"Mid");
 printf("Print 1st Node:: %s\n, Print 2nd Node:: %s\n, Print 3rd Node %s\n ",head->data, head->link->data, head->link->link->data);

 printf("// ================== Assignment 3 ===================== //\n");
 
 j = (struct node *)malloc(sizeof(struct node));
 if(j == NULL)
 {
   printf("Error in Malloc");
   return FAILURE;
 }
 
 m = head;
 while(m->link != NULL)
 {
   m = m->link;
 }
 m->link = j;
 strcpy(head->link->link->link->data,"End");

 f = head;
 do
 {
   printf("%s \t",f->data);
   f = f->link;
   
 }while (f != NULL);
 printf("\n Recursion output \n");
 traverse(head);
 
 printf("\nReturning with Success");
 return SUCCESS;
}

void traverse(struct node *head)
{
// printf("Inside traverse Function \n");	
 if(head != NULL)	
 {
  printf("%s\t ",head->data);
  traverse(head->link);
 }
 
// printf("Exiting traverse function");

}

