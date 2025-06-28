#include<stdio.h>
int main()
{	
	int num_1;
	int num_2;
	int num_3;
	int num_4=num_1+num_2+num_3;
	printf("the num_1:",num_1);
	scanf("%d\n",&num_1);
	printf("the num_2:",num_2);
	scanf("%d\n",&num_2);
	printf("the num_3:",num_3);
	scanf("%d\n",&num_3);
	printf("num_4:%d",num_1+num_2+num_3);
	return 0;
}