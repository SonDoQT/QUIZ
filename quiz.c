#include<stdio.h>


void quiz (int* pt, int b)
{
	int quiz_A = 10;
	int quiz_B = 20;
	* pt = quiz_B;
}


int max_new(int num1, int num2) {

   int result;
   
   if (num1 > num2)
   {
   
      result = num1;
      printf("max: %d\n",num1);
   }
   else
   {
      result = num2;
      printf("max: %d\n",num2);
   }
   
   return result; 
}