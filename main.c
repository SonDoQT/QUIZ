#include <stdio.h>
#include <stdlib.h>
#include "E:\Code Dev\Exercise C\exercise.h"
#include "quiz.h"

#define X 20
#define Y 15
#define Sub(a,b) 20-2

#define FOR(i,m,n) for(int i=m;i<n;i++)
#define PR(x) printf("value:%d\n",x)





int average3num (int, int, int);

int average3num (int nu1, int nu2, int nu3) {
	int average;
	average = (nu1 + nu2 + nu3)/3;
	printf("Average of 3 number: %d\n\n", average);
	return average;
}

int Arr[10];




int main(int argc, char *argv[]) {
	int ques;

	int i=5;
	int j=3;
	int value;
	int value_Return;

	const int x =2; // x: local bo nho stack thay doi dk gia tri con gloabl duoc luu vao bo nho hang ko the thay doi gia tri
	int *pt = &x;

	printf("enter number of question:");
	scanf("%d",&ques);

	switch(ques) {
		case 1:
			sum2num(i,j);                //question1: 	printf("i+j= %d", sum2num(5,3));

			value_Return = sum2num(9,9);
			printf("value from return : %d\n",value_Return);
			break;

		case 2:
			quiz(&value );                //question2
			printf("value from func void: %d\n", value);

			quiz_Arr(Arr);
			printf("value arr from func void: %d\n", Arr[0]);
			printf("value arr from func void: %d\n", Arr[1]);
			printf("value arr from func void: %d\n", Arr[2]);
			printf("value arr from func void: %d\n", Arr[3]);

			break;

		case 3:

			max_new(i,j);                  //question3

			average3num(2,4,6);
			break;

		case 4:

			sum2num(X,Y);
			printf("macro A-B: %d\n",Sub(a,b));
			printf("macro x: %d\n",X);  // use macro
			printf("macro y: %d\n",Y);
			FOR(i,1,5)
			PR(i);
			break;

		case 5:

			*pt = 6;
			printf("value of const:%d\n",x);
			break;
	}
	printf("***************************************\n");
#if(0)
	printf("code of the book\n");

	char book_Name[20];
	printf("Enter of the book name\n");
//    scanf("%s", book_Name);
//
//    gets(book_Name);
//    puts(book_Name);
//    printf("The book name:%s", book_Name);

	int a;   // auto
	char b;
	float c;

	printf("%d,%c,%f\n\n",a,b,c); // storage auto: garbage value
#endif


#if(0)
	int (*ptr)(int,int,int);   //func pointer
	ptr = average3num;
	printf("average of three number: %d", ptr(8,8,8));
#endif

#if(0)

	int (*ptr3num)(int,int,int);  // func pointer is parameter

	ptr3num = average3num;
	printf("average:%d", func(ptr3num,23,6,7));

#endif




	return 0;
}



#if(0)
return_type (*func_pointer)(parameter list);
void (*foo)(int, int);
int* f1();
function return a pointer
                int (*f2)();
function pointer
int* (*f3)();
function pointer_return a pointer
format:
func pointer giong function tro den
**:
Assign an address to a function pointer

int sum (int a, int b);

c1:
int (*ptr)(int,int) = &sum;

c2:
int (*prt)(int,int);
ptr = sum;




#endif
