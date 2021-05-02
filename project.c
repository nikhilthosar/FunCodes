#include<stdio.h>
#define SUCCESS 1
#define FAILURE 0 

int palindrome(int);
int power(int ,int );
int fibonacci(int ,int, int);
int pyramid(int);

int main()
{
 int iNum,iNum2,iTerms,iRetVal;
 char function;
 printf("Enter the corresponding letter to the function to be performed from below list:\n pallindrome - p\n Pyramid - r \n Fibonacci - f \n Your Option :: ");
 scanf("%c",&function);

 switch(function)
 {
 case 'p':  printf("\nAs you selected Pallindrome, Enter the Number");
            scanf("%d",&iNum);
	    iRetVal = palindrome(iNum);
	    if(iRetVal == SUCCESS)
            { 
	      printf("\nYeah! Its a Pallindorme \n"); 
	    }
            else
            {
	      printf("\nNope! Its not a  Pallindorme \n");
	    }
	    break;

 case 'r':  printf("Enter the Level of Pyramid");
	    scanf("%d",&iNum);
	    iRetVal = pyramid(iNum);
            if(iRetVal == SUCCESS)
            {
              printf("\nThanks! \n");
            }
            break;

 case 'f':  printf("\nAs you selected Fabonacci, Enter First Number of Series Number");
	    scanf("%d",&iNum);
	    printf("\nEnter Second Number of Series Number");
	    scanf("%d",&iNum2);
	    printf("\nEnter number of terms desired in series");
            scanf("%d",&iTerms);
	    iRetVal = fibonacci(iNum,iNum2,iTerms);
	    if(iRetVal == SUCCESS)
            {
              printf("\nThanks! \n");
            }
            break; 

 default :  printf("\n Sorry I cant perform this, Please refer the list\n");
 }          

 return 1;	    
}

int palindrome(int iNum)
{
 
 printf("Entering function palindrome \n");

 int count = 0;
 int rem   = 0;
 int Final = 0;
 int digit = 0;
 int temp  = iNum;
 int orig = iNum;
 while(temp != 0)
 {
   temp = temp/10;
   count++;
 }
 printf("\nOUTPUT: \ndigit count in your Number is :: %d", count);

 if(count == 1)
 {
  printf("\nBeing Single Digit Number its obviously Pallindrome");
  return SUCCESS;
 }
 else
 {	 
   while(iNum != 0)
   {
    digit = iNum%10;
    Final = Final + digit*power(10,(count-1));
    iNum = iNum/10;
    count--;
   }
   printf("\nReversed Number Value is :: %d, Original Value is :: %d", Final,orig);
 }

 if(Final == orig)
 {
   return SUCCESS;
 }
 else 
 {
   return FAILURE;
 }

}

int fibonacci(int iNum,int iNum2,int iTerms)
{
 printf("Entering Function fibonacci");
 int sum=0;
 printf("%d\n%d\n",iNum,iNum2);
 while(iTerms != 0)
 {
  sum = iNum + iNum2;
  printf("%d\n",sum);
  iNum = iNum2;
  iNum2 = sum;
  iTerms--;
 }
 return SUCCESS;
}

int pyramid(int iNum)
{
 int i, j, k;
 for(i = 1; i<=iNum; i ++ )
 {
   for(k = 1 ; k<=iNum-i; k++)
   {
     printf(" ");
   }
   for(j = 1; j<=2*i-1; j++ )
   {
     printf("*");
   }
   printf("\n");
 }
 return SUCCESS;
}


/******************************COMMON FUNCTIONS*************************************/

int power(int d,int c)
{
 int p=1;
 int i=0;
 //printf("value of d, c are:: %d, %d\n",d,c);

 for(i=0;i<c;i++)
 {
  p=p*d;

 }
return p;
}

/**************************************************************************************/
