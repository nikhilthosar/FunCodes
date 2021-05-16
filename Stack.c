#include<stdio.h>
#define MAX 10
int main()
{
 
 int Stack[MAX];
 int top= -1, n= 0, item = 0, k= 0;
 printf("Enter no. of values to be pushed on Stack\n");
 scanf("%d",&n); 
 while(n)
 {
  printf("Enter the value to be pushed on stack\n");
  scanf("%d",&item);
  Stack[++top] = item;
  printf("The Value pushed on STACK at Stack[%d] is :: %d\n",top,Stack[top]);
  n--;
 }

 printf("Enter no. of values to be popped from Stack\n");
 scanf("%d",&k); 
 while(k)
 {
  item = Stack[top--];
  printf("The Popped item is ::  %d\n",item);
  k--;
 }
 return 0;
}
