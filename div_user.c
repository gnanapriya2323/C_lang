#include<stdio.h>
int main()
{	
	int num_1;
	int num_2;
	float result;
	
	
	printf("the num_1:");
	scanf("%d\n",&num_1);

	printf("the num_2:");
	scanf("%d\n",&num_2);
	
	result=(num_1/num_2);
	printf("result is  %f",num_1/num_2);
	return 0;
}