#include <stdio.h>
#include "quiz.h"

void quiz (int* pt)
{
	int quiz_A = 10;
	int quiz_B = 20;
	int quiz_C = 100;
	int quiz_D = 150;
	*pt = quiz_A;
}


void quiz_Arr(int arrvoid[])
{
	int quiz_A = 10;
	int quiz_B = 20;
	int quiz_C = 100;
	int quiz_D = 150;
	arrvoid[0]= quiz_A;
	arrvoid[1]= quiz_B;
	arrvoid[2]= quiz_C;
	arrvoid[3]= quiz_D;
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


int func(int(*num3)(int,int,int),int a,int b, int c)
{
	return num3(a,b,c);
}
	


