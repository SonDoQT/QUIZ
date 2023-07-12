#include <stdio.h>
#include <stdlib.h>
#include "E:\Code Dev\Exercise C\exercise.h"
#include "quiz.h"




int main(int argc, char *argv[]) 
{
	printf("hello quiz\n");

	int i=5;
	int j=3;
	int value;

	sum2num(i,j);
//	printf("i+j= %d", sum2num(5,3));
	printf("hello\n");
    printf("value: %d\n", value);
    
    quiz(&value, 7);
    printf("value from func void: %d\n", value);

	max_new(i,j);
	

	return 0;
}

